#include "opcodefun.ih"

FILE         *go_infile;
BinHeader    *go_header;

void (*p_procfun[])(void) =
     {
         o_jmp,
         o_jmpFalse,
         o_jmpTrue,
         o_push_1_jmp_end,
         o_push_0,
         o_push_imm,
         o_push_strconst,
         o_pushVar,
         o_push_reg,
         o_popVar,
         o_umin,
         o_atoi,
         o_itoa,
         o_atol,
         o_mul,
         o_div,
         o_mod,
         o_add,
         o_sub,
         o_eq,
         o_neq,
         o_sm,
         o_gr,
         o_younger,
         o_older,
         o_smeq,
         o_greq,
         o_callBuiltinFun,
         o_asp,
         o_exit,
         o_copyVar,
         o_inc,
         o_dec,
         o_call,
         o_frame,
         o_ret,
         o_popReg,
         o_band,
         o_bor,
         o_bnot,
         o_xor,
         o_shl,
         o_shr,
     
         /* o_hlt does not exist, op_hlt is a dummy... */
     };

