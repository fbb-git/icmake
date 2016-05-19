#include "icmun.ih"

BinHeader *headerp;

char
    *funname [] =
    {
        /* 0 */
        "arghead",
        "argtail",
        "ascii_int2str",
        "ascii_str2int",

        /* 4 */
        "backtick",
        "change_base",
        "change_ext",
        "change_path",

        /* 8 */
        "chdir",
        "cmdhead",
        "cmdtail",
        "echo",

        /* c */
        "list_element",
        "eval",
        "exec",
        "execute",

        /* 10 */
        "exists",
        "fgets",
        "fprintf",
        "get_base",

        /* 14 */
        "get_dext",
        "get_ext",
        "get_path",
        "getch",

        /* 18 */
        "getenv",
        "getpid",
        "gets",
        "listlen",

        /* 1c */
        "makelist",
        "printf",
        "putenv",
        "stat",

        /* 20 */
        "string_element",
        "strfind",
        "strformat",
        "strlen",

        /* 24 */
        "strlwr",
        "resize",
        "strtok",
        "strupr",

        /* 28 */
        "substr",
        "system",
        "trim",
        "trimleft",

        /* 2c */
        "trimright",
        "strchr",
        "listfind",
        "listunion"
    };

FILE *infile;

int8_t *local_types;

unsigned
    curoffs,
    nvar;

Variable *var;

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
