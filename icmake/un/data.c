#include "icmun.h"

BIN_HEADER_
    *headerp;

char
    *funname [] =
    {
        "arghead",
        "argtail",
        "ascii_int2str",
        "ascii_str2int",
        "backtick",
        "change_base",
        "change_ext",
        "change_path",
        "chdir",
        "cmdhead",
        "cmdtail",
        "echo",
        "list_element",
        "exec",
        "execute",
        "exists",
        "fgets",
        "fields",
        "fprintf",
        "get_base",
        "get_dext",
        "get_ext",
        "get_path",
        "getch",
        "getenv",
        "getpid",
        "gets",
        "makelist",
        "printf",
        "putenv",
        "length",
        "stat",
        "string_element",
        "strfind",
        "strformat",
        "strlen",
        "strlwr",
        "strupr",
        "substr",
        "system",
        "trim",
        "trimleft",
        "trimright",
    };

FILE *infile;

INT8 *local_types;

size_t
    curoffs,
    nvar;

VAR_ *var;

void
    (*p_procfun[])(void) =
    {
        fun_jmp,
        fun_jmp_false,
        fun_jmp_true,
        fun_push_1_jmp_end,
        fun_push_0,
        fun_push_imm,
        fun_push_strconst,
        fun_push_var,
        fun_push_reg,
        fun_pop_var,
        fun_umin,
        fun_atoi,
        fun_itoa,
        fun_atol,
        fun_mul,
        fun_div,
        fun_mod,
        fun_add,
        fun_sub,
        fun_eq,
        fun_neq,
        fun_sm,
        fun_gr,
        fun_younger,
        fun_older,
        fun_smeq,
        fun_greq,
        fun_call_rss,
        fun_asp,
        fun_exit,
        fun_copy_var,
        fun_inc,
        fun_dec,
        fun_call,
        fun_frame,
        fun_ret,
        fun_pop_reg,
        fun_band,
        fun_bor,
        fun_bnot,
        fun_xor,
        fun_shl,
        fun_shr,
        /* fun_hlt : bogus value... op_hlt does not really exist */
    };
