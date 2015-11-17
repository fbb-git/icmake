#include "opcodefun.ih"

char *go_cmdtail;
char *go_cmdHead;
char *go_cmdtail;

Variable *go_globalVar;

int go_retVal;

FILE         *go_infile;
BinHeader    *go_header;

void (*go_pRssFun[])(void) =
{
    o_jmp,                    /*   op_jmp,                00     */
    o_jmpFalse,               /*   op_jmp_false,          01     */
    o_jmpTrue,                /*   op_jmp_true,           02     */
    o_push_1_jmp_end,         /*   op_push_1_jmp_end,     03     */
    o_push_0,                 /*   op_push_0,             04     */
    o_push_imm,               /*   op_push_imm,           05     */
    o_push_strconst,          /*   op_push_strconst,      06     */
    o_pushVar,                /*   op_push_var,           07     */
    o_push_reg,               /*   op_push_reg,           08     */
    o_popVar,                 /*   op_pop_var,            09     */
    o_umin,                   /*   op_umin,               0a     */
    o_atoi,                   /*   op_atoi,               0b     */
    o_itoa,                   /*   op_itoa,               0c     */
    o_atol,                   /*   op_atol,               0d     */
    o_mul,                    /*   op_mul,                0e     */
    o_div,                    /*   op_div,                0f     */
    o_mod,                    /*   op_mod,                10     */
    o_add,                    /*   op_add,                11     */
    o_sub,                    /*   op_sub,                12     */
    o_eq,                     /*   op_eq,                 13     */
    o_neq,                    /*   op_neq,                14     */
    o_sm,                     /*   op_sm,                 15     */
    o_gr,                     /*   op_gr,                 16     */
    o_younger,                /*   op_younger,            17     */
    o_older,                  /*   op_older,              18     */
    o_smeq,                   /*   op_smeq,               19     */
    o_greq,                   /*   op_greq,               1a     */
    o_callRss,                /*   op_call_rss,           1b     */
    o_asp,                    /*   op_asp,                1c     */
    o_exit,                   /*   op_exit,               1d     */
    o_copyVar,                /*   op_copy_var,           1e     */
    o_inc,                    /*   op_inc,                1f     */
    o_dec,                    /*   op_dec,                20     */
    o_call,                   /*   op_call,               21     */
    o_frame,                  /*   op_frame,              22     */
    o_ret,                    /*   op_ret,                23     */
    o_popReg,                 /*   op_pop_reg,            24     */
    o_band,                   /*   op_band,               25     */
    o_bor,                    /*   op_bor,                26     */
    o_bnot,                   /*   op_bnot,               27     */
    o_xor,                    /*   op_xor,                28     */
    o_shl,                    /*   op_shl,                29     */
    o_shr,                    /*   op_shr,                2a     */

    /* o_hlt does not exist, op_hlt is a dummy... */
};

