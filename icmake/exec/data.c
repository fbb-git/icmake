#include "icm-exec.h"

char
    nullstring [] = "",
    orgdir [_MAX_PATH],
    *arghead,
    *argtail,
    *bimname,
    *cmdhead,
    *cmdtail;

FILE
    *infile;

BIN_HEADER_
    *headerp;

int
    echo = 1,
    retval;

UNS16
    nvar,
    bp,
    sp = (UNS16) -1;

unsigned
    curoffs;

VAR_
    reg,
    *var,
    *stack;

void
    (*procfun[]) ARG ((void)) =
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

        /* fun_hlt does not exist, op_hlt is a dummy... */

    },

    (*builtinfun[]) ARG ((void)) =
    {
        fun_arg_head,
        fun_arg_tail,
        fun_ascii_int,
        fun_ascii_str,

        fun_c_base,
        fun_chdir,
        fun_c_ext,
        fun_cmd_head,
        fun_cmd_tail,
        fun_c_path,

        fun_echo,
        fun_element,
        fun_exec,
        fun_exec,                       /* dummy for compiler-used */
        fun_exists,                     /*     fun_execute */

        fun_fields,
        fun_fgets,
        fun_fprintf,

        fun_g_base,
        fun_getch,
        fun_gets,
        fun_g_ext,
        fun_g_path,

        fun_makelist,

        fun_printf,
        fun_putenv,

        fun_sizeoflist,
        fun_stat,
        fun_str_el,
        fun_strlwr,
        fun_strupr,
        fun_system,
        fun_strlen,
        fun_strfind,
        fun_getpid,

        fun_substr,
        fun_getenv,
        fun_empty,
        fun_empty,
        fun_empty,
        fun_empty,
        fun_empty,

        /* fun_hlt is non-existent.. f_hlt used to mark unexisting functions */
    };
