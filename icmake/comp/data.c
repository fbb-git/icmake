
/*
                                D A T A . C
*/

#include "iccomp.h"

char
    *filenames,
    *funstring[] =                          /* only one_arg  */
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
    },
    icm_comp[]          = "ICM-COMP:",
    illegal_argcount[]  = "%s(): too few arguments",
    illegal_cast[]      = "illegal cast",
    illegal_type[]      = "illegal type for %s",
    init_expr_not_const[] = "initialization expression must be const",
    lvalue_needed[]     = "lvalue needed for %s",
    nullstring[]        = "",
    *opstring[] =
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
    },
    *source_name,
    *lexstring,                          /* resizing STRING buffer */
    *stringbuf,                          /* final STRING */
    type_conflict[] = "conflicting operand types for %s";

E_TYPE_
    vartype;

E_TYPE_
    optype[] =
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

FILE
    *s_bin;

int
    initialization = 0,
    parse_error = err_code_or_vars_expected,
    (*yylex_input)(char *, int) =           /* pointer to yylex input to use */
                            yylex_file;     /* start reading from file       */

OPCODE_
    lastop = op_hlt;

STRINGTAB_
    *stringtab;

SYMTAB_
    local,
    funtab,
    global,
    *entertab = &global;

HIDDEN_FUNCTION_
    hidden[he_] =
    {
        {
            "h_older",                      /* name */
                                            /* source of the hidden function */
            "list h_older(int attrib, string mask, string file)"
            "{"
            "   int"
            "       idx;"
            "   list"
            "       source,"
            "       dest;"
            "   string"
            "       s;"
            ""
            "   source = makelist(attrib, mask);"
            "   for (idx = sizeof(source); idx--; )"
            "   {"
            "       s = element(idx, source);"
            "       if (s older file)"
            "           dest += (list)s;"
            "   }"
            "   return (dest);"
            "}",

            e_reg | e_list,                 /* returntype */
            0,                              /* must be 0, set to 1 if called */
            3,                              /* number of arguments */
        },

        {
            "h_younger",

            "list h_younger(int attrib, string mask, string file)"
            "{"
            "   int"
            "       idx;"
            "   list"
            "       source,"
            "       dest;"
            "   string"
            "       s;"
            ""
            "   source = makelist(attrib, mask);"
            "   for (idx = sizeof(source); idx--; )"
            "   {"
            "       s = element(idx, source);"
            "       if (s younger file)"
            "           dest += (list)s;"
            "   }"
            "   return (dest);"
            "}",

            e_reg | e_list,
            0,
            3,
        },
    };

size_t
    break_ok,
    dead_sp,
    errcount,
    hidden_called,
    nestlevel,
    n_params,
    n_strings,
    n_symbols,
    sem_err,
    stringsize;

unsigned *dead;

ESTRUC_ global_init;             /* code for initializing globals */
