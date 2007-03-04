/*
                              G E N C O D E . C
*/

#include "iccomp.h"

void gencode(ESTRUC_ *e, OPCODE_ opcode, ...)
{
    register size_t
        idx,
        last;
    int
        marker_value;
    size_t
        count;
    va_list
        marker;

    if (dead[dead_sp])
        return;

    va_start(marker, opcode);

    lastop = opcode;                        /* remember last opcode */
    outcode(e, (int)opcode, sizeof(char));

    switch (opcode)
    {
        case op_jmp:                        /* write target to jump to */
            switch ((JMP_COND_)va_arg(marker, JMP_COND_))
            {
                case j_uncond:              /* absolute jumplocation */
                    outcode(e, va_arg(marker, int), sizeof(INT16));
                break;

                case j_truelist:
                    patchtrue(e);           /* new truelist item */
                break;

                case j_falselist:
                    patchfalse(e);          /* new falselist item */
                break;
            }
        break;

        case op_jmp_false:                  /* write target to jump if false */
            patchfalse(e);
        break;

        case op_jmp_true:                   /* write target to jump if true */
            patchtrue(e);
        break;

        case op_push_strconst:              /* write idx of the const */
            outcode(e, 
                (int)stringtab[va_arg(marker, int)].index, sizeof(INT16));
        break;

        case op_frame:
            count = last = local.n_defined - n_params;
            outcode(e, (int)count, sizeof(char));
            for (idx = 0; idx < last; idx++)
            {
                count = local.symbol[n_params + idx].var.type & ALLTYPES;
                outcode(e, (int)count, sizeof(char));
            }
        break;

        case op_copy_var:                   /* write # of the var. */
        case op_push_imm:                   /* write value of the int */
        case op_push_var:                   /* write # of the var. */
        case op_dec:                        /* write # of the var. */
        case op_inc:                        /* write # of the var. */
        case op_call:                       /* write offset of function */
            outcode(e, va_arg(marker, int), sizeof(INT16));
        break;

        case op_asp:                        /* write # of args to remove */
            marker_value = va_arg(marker, int);
            if (!marker_value)              /* nothing to add to sp */
                e->codelen--;               /* opcode removed from code */
        else
                outcode(e, marker_value, sizeof(char));
        break;      

        case op_call_rss:                   /* write # of function */
            outcode(e, va_arg(marker, int), sizeof(char));
        break;

        case op_ret:
        case op_exit:
            ++dead[dead_sp];
        break;

        default:
/*
        The default switch entry is inserted to prvent a long compiler
        warning about a not-handled enum value

        following opcodes already out:

        op_pop_reg
        op_push_reg
        op_push_1_jmp_end
        op_push_0
        op_umin
        op_atoi
        op_itoa
        op_atol
        op_mul
        op_div
        op_mod
        op_add
        op_sub
        op_eq
        op_neq
        op_sm
        op_gr
        op_younger
        op_older
        op_smeq
        op_greq
*/
break;
    }
}
