comment|                        R E D I R E C T. A S M
/*
    % 1 name
\functoc {redirect\ul start}
    % 2 declaration
{unsigned redirect\ul start(\params\ )}
    % 3 arguments
{
    {unsigned}{old}{handle of file to redirect}
    {unsigned}{new}{handle of redirected file}
}
    % 4 return value
{
    The value zero indicates an error, otherwise a duplicate of the \Var{old}
    handle is returned, which must be used again to end redirection.
}
    % 5 functions used
{}
    % 6 see also
{redirect\ul end, fileno\ul nul}
    % 7 source file
{redirect.asm}
    % 8 description
{
    The information written to or read from the \Var{old} file will be
    redirected to or from the file with handle \Var{new}.
    To  redirect to the file \Var{nul}, open this file for writing,
    and fetch its filenumber (cf. DOS ENCYCLOPEDIA, p151).
}
    % 9 example (tabbing teletype, use \> and \\)
{
\>  \#include $<$icce.h$>$                                \\
\\
\>void main()\\
\>\{\\
\>\>register unsigned \\
\>\>\>  tmp;\\
\\
\>\>tmp = redirect\_start(fileno(stdout), fileno\_nul());\\
\>\>// info to standard out is not visible anymore\\
\>\>redirect\_end(fileno(stdout), tmp);\\
\>\>// info to standard out is visible again\\
\>\}\\
}

    % 1 name
\functoc {redirect\ul end}
    % 2 declaration
{redirect\ul end (\params\ )}
    % 3 arguments
{
    {unsigned}{org}{handle of redirected file}
    {unsigned}{dup}{handle of duplicate handle, returned by redirect\ul start}
}
    % 4 return value
{
    The value zero indicates an error, otherwise the redirection is ended.
}
    % 5 functions used
{}
    % 6 see also
{redirect\ul start, fileno\ul nul}
    % 7 source file
{redirect.asm}
    % 8 description
{
    A former redirection of information to or from a file is terminated.
}
    % 9 example (tabbing teletype, use \> and \\)
{
\>  \#include $<$icce.h$>$                                \\
\\
\>void main()\\
\>\{\\
\>\>register unsigned \\
\>\>\>  tmp;\\
\\
\>\>tmp = redirect\_start(fileno(stdout), fileno\_nul());\\
\>\>// info to standard out is not visible anymore\\
\>\>redirect\_end(fileno(stdout), tmp);\\
\>\>// info to standard out is visible again\\
\>\}\\
}
*/
comment ends|


;   MASM.INC for ML 6.0 pwp 92 11 05

comment!
    Adapted from earlier versions by Frank Brokken.

    The _model macro should be the 2nd statement (following 'include masm.inc')
    in assembler source files, assumes C as the main language, and
    DOS as the operating system.

    The _model macro is activated automatically when this file is included,
    assuming C being the main language, and MS-DOS the operating system.

    Note that the TINY memory model requires the /AT command line switch too.
    X.BAT provides this switch automatically.

    The _static_proc macro allows the definition of a static MASM function,
    the _static_endp macro is optional, and has cosmetic asuage only.

    Assembler sources should be organized as follows:

    -------------------------------------------------------
    include \sys\inc\masm.inc

    .data          ; (optional)

    .code

        example proc    ;   as an example: becomes public _example
            ; rest of code
        example endp

    end
    -------------------------------------------------------

    If a function sets up a stackframe, pointed to by bp, an 'assume bp'
    is required, e.g.:

    -------------------------------------------------------
    include \sys\inc\masm.inc

    .data          ; (optional)

    .code

        example proc    ;   as an example: becomes public _example
            stackframe struct           ; NOTE: struc or struct, all ok
                old_bp  dw ?            ; <-- BP will point here
                local_var   dw ?
                ife @DataSize
                    m_mem   dw ?
                else
                    m_mem   dd ?
                endif
                arg1    dw ?
                arg2    dw ?
            stackframe ends

            sub sp, 2   ; local var
            push bp     ; old bp
            mov bp, sp  ; stackframe now ready
            assume bp: near ptr stackframe            ; NEW NEW NEW

            mov ax, [bp].arg1   ; usage as before

            ; rest of code

            mov sp, bp;         (optional) restore SP to stackframe
            add sp, 2;          remove locals
            ret;                gone
        example endp

    end
    -------------------------------------------------------

    24/06/93, FBB

    1: If the assembler source uses a struc-definition, then the register
    pointing to the struct must be 'assumed' on that struct. A
    stackframe struc my_frame, to which bp points asfter stackinitialization
    is accessible by bp after the following assume:

    assume bp: near ptr my_frame

    The same procedure can be followed with other structs/pointing registers
    combinations.

    2: Since this file was ALWAYS followed by

        _model

    after its inclusion in an ASM sourcefile, the _model is now part of this
    file. In old ASM files, an existing _model directive should be removed.

comment ends!

_model macro
    ife     MM - 'T'
        .model tiny, C
    elseife MM - 'S'
        .model small, C
    elseife MM - 'C'
        .model compact, C
    elseife MM - 'M'
        .model medium, C
    elseife MM - 'L'
        .model large, C
    elseife MM - 'H'
        .model huge, C
    endif
endm

_static_proc macro name
    name label near
endm

_static_endp macro
endm

_model

.data
    old_handle dw ?
    new_handle dw ?

.code

    redirect_start proc from, to

        mov bx, from;                   handle to redirect
        mov ah, 45h;                    duplicate_handle
        int 21h;                        duplicate of handle in AX
        jc abnormal_end_0;              if error, abort

        push ax
            mov cx, from;               source in CX
            mov bx, to;                 BX = new handle
            mov ah, 46h;                force_duplicate
            int 21h;                    done
        pop ax
        jc abnormal_end_0;              if error, abort

        normal_end_0:
            jmp short end_0

        abnormal_end_0:
            sub ax, ax

        end_0:
        ret

    redirect_start endp

    redirect_end proc original, duplicate
        mov bx, duplicate;              BX = redirected handle
        mov cx, original;               CX = original handle
        mov ah, 46h;                    force redirection of old file to dup.
        int 21h;                        done
        jc abnormal_end_1

        mov bx, duplicate
        mov ah, 3Eh;                    close duplicate, BX is new handle
        int 21h;                        done
        jc abnormal_end_1

        normal_end_1:
            jmp short end_1

        abnormal_end_1:
            sub ax, ax

        end_1:
        ret

    redirect_end endp

end
