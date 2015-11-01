#include "parser.ih"

int gp_initialization = 0;
int gp_parse_error = err_code_or_vars_expected;
size_t  gp_breakOK;
size_t  gp_nestLevel;
size_t  gp_nParams;
size_t  gp_stringsize;

char *gp_funstring[] =                          /* only one_arg  */
{
    "arghead",
    "argtail",
    "ascii",
    "ascii",

    "change_base",
    "chdir",
    "change_ext",
    "cmdhead",
    "cmdtail",
    "change_path",

    "echo",
    "element",
    "exec",
    "execute",
    "exists",

    "strtok",
    "fgets",
    "fprintf",

    "get_base",
    "getch",
    "gets",
    "get_ext",
    "get_path",

    "makelist",

    "printf",
    "putenv",

    "sizeoflist",
    "stat",
    "element",                          /* f_str_el */
    "strlwr",
    "strupr",
    "system",
};

E_TYPE_ gp_opType[] =
{
    0,                                  /*     op_jmp, */
    0,                                  /*     op_jmp_false, */
    0,                                  /*     op_jmp_true, */
    0,                                  /*     op_push_1_jmp_end, */
    0,                                  /*     op_push_0, */
    0,                                  /*     op_push_imm, */
    0,                                  /*     op_push_strconst, */
    0,                                  /*     op_push_var, */
    0,                                  /*     op_push_reg, */
    0,                                  /*     op_pop_var, */
    e_int | e_list | e_bool,            /* op_umin, */
    e_str,                              /* op_atoi, */
    e_int | e_bool,                     /* op_itoa, */
    e_str,                              /* op_atol, */
    e_int | e_bool,                     /* op_mul,  */
    e_int | e_bool,                     /* op_div,  */
    e_int | e_bool,                     /* op_mod,  */
    ALLTYPES,                           /* op_add, */
    ALLTYPES,                           /* op_sub, */
    ALLTYPES,                           /* op_eq, */
    ALLTYPES,                           /* op_neq, */
    e_int | e_bool | e_str,             /* op_sm, */
    e_int | e_bool | e_str,             /* op_gr, */
    e_str,                              /* op_younger, */
    e_str,                              /* op_older, */
    e_int | e_bool | e_str,             /* op_smeq, */
    e_int | e_bool | e_str,             /* op_greq, */
    0,                                  /* op_call */
    0,                                  /* op_asp */
    0,                                  /* op_ret */
    0,                                  /* op_copy_var */
    e_int,                              /* op_inc */
    e_int,                              /* op_dec */
    0,                                  /* op_call */
    0,                                  /* op_frame */
    0,                                  /* op_ret */
    0,                                  /* op_pop_ */
    e_int,                              /* op_band */
    e_int,                              /* op_bor */
    e_int,                              /* op_bnot */
    e_int,                              /* op_xor */
    e_int,                              /* op_shl */
    e_int,                              /* op_shr */
};

char *gp_opstring[] =
{
    NULL,                               /*     op_jmp, */
    NULL,                               /*     op_jmp_false, */
    NULL,                               /*     op_jmp_true, */
    NULL,                               /*     op_push_1_jmp_end, */
    NULL,                               /*     op_push_0, */
    NULL,                               /*     op_push_imm, */
    NULL,                               /*     op_push_strconst, */
    NULL,                               /*     op_push_var, */
    NULL,                               /*     op_push_reg, */
    NULL,                               /*     op_pop_var, */
    "(unary) -",                        /* op_umin, */
    "(int)",                            /* op_atoi, */
    "(string)",                         /* op_itoa, */
    "(list)",                           /* op_atol, */
    "*",                        /* op_mul, */
    "/",                        /* op_div, */
    "%%",                       /* op_mod, */
    "+",                        /* op_add, */
    "-",                        /* op_sub, */
    "==",                       /* op_eq, */
    "!=",                       /* op_neq, */
    "<",                        /* op_sm, */
    ">",                        /* op_gr, */
    "younger",                  /* op_younger, */
    "older",                    /* op_older, */
    "<=",                       /* op_smeq, */
    ">=",                       /* op_greq, */
    NULL,                               /* op_call */
    NULL,                               /* op_asp */
    NULL,                               /* op_ret */
    NULL,                               /* op_copy_var */
    "++",                       /* op_inc */
    "--",                       /* op_dec */
    NULL,                               /* op_call */
    NULL,                               /* op_frame */
    NULL,                               /* op_ret */
    NULL,                               /* op_pop_ */
    "&",                                /* op_band */
    "|",                                /* op_bor */
    "~",                                /* op_bnot */
    "^",                                /* op_xor */
    "<<",                               /* op_shl */
    ">>",                               /* op_shr */
};

char    gp_typeConflict[]   = "conflicting operand types for %s";
char    gp_illegalType[]    = "illegal type for %s";
char    gp_lvalueNeeded[]     = "lvalue needed for %s";
char    gp_init_expr_not_const[] = "initialization expression must be const";
char    gp_illegalArgCount[]  = "%s(): too few arguments";
char    gp_illegalCast[]      = "illegal cast";


E_TYPE_ gp_varType;

OPCODE_ gp_lastOp = op_hlt;

SYMTAB_  gp_local;
