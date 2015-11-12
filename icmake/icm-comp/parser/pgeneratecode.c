#include "parser.ih"

void p_generateCode(SemVal *e, OPCODE_ opcode, ...)
{
    register size_t idx;
    int marker_value;
    va_list marker;

    if (gp_dead[gp_dead_sp])
        return;

    va_start(marker, opcode);

    gp_lastOp = opcode;                        /* remember last opcode */
    p_outCode(e, (int)opcode, sizeof(char));

    switch (opcode)
    {
        case op_jmp:                        /* write target to jump to */
            switch ((JMP_COND_)va_arg(marker, JMP_COND_))
            {
                case j_uncond:              /* absolute jumplocation */
                    p_outCode(e, va_arg(marker, int), sizeof(int16_t));
                break;

                case j_truelist:
                    p_patchTrue(e);           /* new truelist item */
                break;

                case j_falselist:
                    p_patchFalse(e);          /* new falselist item */
                break;

                case j_continuelist:
                    p_patchContinue(e);       /* new continuelist item */
                break;
            }
        break;

        case op_jmp_false:                  /* write target to jump if false */
            p_patchFalse(e);
        break;

        case op_jmp_true:                   /* write target to jump if true */
            p_patchTrue(e);
        break;

        case op_push_strconst:              /* write idx of the const */
            p_outCode(e, 
                (int)gp_stringTable[va_arg(marker, int)].index, sizeof(int16_t));
        break;

        case op_frame:
        {
            size_t nLocalVars = symtab_nLocals();

            p_outCode(e, (int)nLocalVars, sizeof(char));

            for (idx = 0; idx != nLocalVars; ++idx)
            {
                ExprType type = symtab_localType(idx);
                p_outCode(e, type, sizeof(char));
            }
        }
        break;

        case op_copy_var:                   /* write # of the var. */
        case op_push_var:                   /* write # of the var. */
        case op_dec:                        /* write # of the var. */
        case op_inc:                        /* write # of the var. */
            /* write backpatch info and fall through ? */
        // FALLING THRU

        case op_push_imm:                   /* write value of the int */
        case op_call:                       /* write offset of function */
            p_outCode(e, va_arg(marker, int), sizeof(int16_t));
        break;

        case op_asp:                        /* write # of args to remove */
            marker_value = va_arg(marker, int);
            if (!marker_value)              /* nothing to add to sp */
                e->codelen--;               /* opcode removed from code */
        else
                p_outCode(e, marker_value, sizeof(char));
        break;      

        case op_call_rss:                   /* write # of function */
            p_outCode(e, va_arg(marker, int), sizeof(char));
        break;

        case op_ret:
        case op_exit:
            ++gp_dead[gp_dead_sp];
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
