/*
                             H I D D E N F U . C
*/


#include "iccomp.h"

static int next_call(void)
{
    register int
        opcode;

    switch (opcode = getopcode(s_bin))
    {
        case op_push_imm:
        case op_jmp:
        case op_jmp_false:
        case op_jmp_true:
        case op_push_strconst:
        case op_push_var:
        case op_pop_var:
        case op_copy_var:
        case op_inc:
        case op_dec:
            fseek(s_bin, sizeof(INT16), SEEK_CUR);
        return (0);                         /* close, but no cigar */

        case op_push_1_jmp_end:
        case op_call_rss:
        case op_asp:
            fseek(s_bin, sizeof(char), SEEK_CUR);
        return (0);                         /* close, but no cigar */

        case op_push_0:
        case op_push_reg:
        case op_umin:
        case op_atoi:
        case op_itoa:
        case op_atol:
        case op_mul:
        case op_div:
        case op_mod:
        case op_add:
        case op_sub:
        case op_eq:
        case op_neq:
        case op_sm:
        case op_gr:
        case op_younger:
        case op_older:
        case op_smeq:
        case op_greq:
        case op_exit:
        case op_ret:
        case op_band:
        case op_bor:
        case op_bnot:
        case op_xor:
        case op_shl:
        case op_shr:
        case op_pop_reg:
                                            /* no argument with opcodes */
        return (0);                         /* close, but no cigar */

        case op_call:
        return (1);                         /* cigar! check this argument */

        case op_frame:                  /* next byte: # bytes to skip */
            fseek(s_bin, (int)getopcode(s_bin), SEEK_CUR);
        return (0);                         /* close, but no cigar */

        default:
            printf("\n"
                  "at offset 0x%lx: @#$%%!!\n"
                  "*INTERNAL ICM-COMP COMPILER ERROR*\n"
                  "In function hidden_functions(): unrecognized opcode while\n"
                  "patching up (hidden-)function calls.\n"
                  "Found opcode: 0x%x.\n"
                  "Please inform the ICCE ICMAKE (Z-side) support group\n"
                  "\n"
                  "THE BIM-FILE IS INVALID AND SHOULD *NOT* BE USED\n"
                  , ftell(s_bin)
                  , opcode
                  );
    }

    return (0);
}

void hidden_functions()
{
    long
        eof;
    register int
        fun;

    if (!hidden_called)
        return;                             /* no hidden calls: nothing to do */

    eof = ftell(s_bin);                     /* remember the eof position */
                                            /* go to begin of code */
    fseek(s_bin, sizeof(BIN_HEADER_), SEEK_SET);

    while (ftell(s_bin) < eof)              /* continue until code processed */
    {
        if (next_call())                    /* find function call */
        {
            fun = -getint16(s_bin);         /* get the address (toggled sign) */
            if (fun >= 0)                   /* hidden function */
            {                               /* reset to patchup */
                fseek(s_bin, -(long)sizeof(INT16), SEEK_CUR);
                lexstring = xstrdup(hidden[fun].name);
                                            /* update the function's address */
                outbin(&(funtab.symbol[fetchfun()].var.vu.i->count),
                         sizeof(INT16));
                fseek(s_bin, 0, SEEK_CUR);  /* ready to read again */
            }
        }
    }
}
