#ifdef MSDOS
#   include <icce.h>
#   include <conio.h>
#   include <process.h>
#   include <direct.h>
#   include <io.h>
#   include <dos.h>
#else
#   include <unistd.h>
#endif

#include <errno.h>
#include <malloc.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "../icm.h"
#include "../rss/icrss.h"

extern char
    nullstring [],
    orgdir [],
    *arghead,
    *argtail,
    *bimname,
    *cmdhead,
    version[],
    release[],
    *cmdtail;

extern void
    (*procfun []) ARG ((void)),
    (*builtinfun []) ARG ((void));

extern FILE
    *infile;

extern BIN_HEADER_
    *headerp;

extern int
    echo,
    retval;

extern UNS16
    nvar,
    bp,
    sp;

extern unsigned
    curoffs;

extern VAR_
    reg,
    *var,
    *stack;

extern char
    **addcmd ARG ((char **, char *)),
    **execmd ARG ((char **, int)),
    *getarg ARG ((int, int *)),
    *getexecarg ARG ((int, int *)),
    *setstring ARG ((char *));

extern int
    getcmdlen ARG ((char **)),
    inlist ARG ((VAR_, char *)),
    istrue ARG ((void));

extern VAR_
    addtolist ARG ((VAR_, char *)),
    copylist ARG ((VAR_)),
    delfromlist ARG ((VAR_, char *)),
    discard ARG ((VAR_)),
    envp2list ARG ((char **)),
    *getdest ARG ((void)),
    newvar ARG ((E_TYPE_)),
    pop ARG ((void)),
    sortlist ARG ((VAR_));

extern void
    abnormal ARG ((int sig, int subcode)),
    cleanup ARG ((void)),
    compare ARG ((VAR_, VAR_)),
    fun_jmp ARG ((void)),
    fun_jmp_false ARG ((void)),
    fun_jmp_true ARG ((void)),
    fun_push_1_jmp_end ARG ((void)),
    fun_push_0 ARG ((void)),
    fun_push_imm ARG ((void)),
    fun_push_strconst ARG ((void)),
    fun_push_var ARG ((void)),
    fun_push_reg ARG ((void)),
    fun_pop_var ARG ((void)),
    fun_umin ARG ((void)),
    fun_atoi ARG ((void)),
    fun_itoa ARG ((void)),
    fun_atol ARG ((void)),
    fun_mul ARG ((void)),
    fun_div ARG ((void)),
    fun_mod ARG ((void)),
    fun_add ARG ((void)),
    fun_sub ARG ((void)),
    fun_eq ARG ((void)),
    fun_neq ARG ((void)),
    fun_sm ARG ((void)),
    fun_gr ARG ((void)),
    fun_younger ARG ((void)),
    fun_older ARG ((void)),
    fun_smeq ARG ((void)),
    fun_greq ARG ((void)),
    fun_call_rss ARG ((void)),
    fun_asp ARG ((void)),
    fun_exit ARG ((void)),
    fun_band (void),
    fun_bor (void),
    fun_bnot (void),
    fun_xor (void),
    fun_shl (void),
    fun_shr (void),

    fun_arg_head ARG ((void)),
    fun_arg_tail ARG ((void)),
    fun_ascii_int (void),
    fun_ascii_str (void),
    fun_stat (void),
    fun_putenv ARG ((void)),
    fun_chdir ARG ((void)),
    fun_cmd_tail ARG ((void)),
    fun_c_base ARG ((void)),
    fun_c_ext ARG ((void)),
    fun_c_path ARG ((void)),
    fun_fields ARG ((void)),
    fun_fgets ARG ((void)),
    fun_fprintf ARG ((void)),
    fun_g_base ARG ((void)),
    fun_getch ARG ((void)),
    fun_getpid (void),
    fun_gets ARG ((void)),
    fun_g_ext ARG ((void)),
    fun_g_path ARG ((void)),
    fun_echo ARG ((void)),
    fun_element ARG ((void)),
    fun_exec ARG ((void)),
    fun_exists ARG ((void)),
    fun_makelist ARG ((void)),
    fun_printf ARG ((void)),
    fun_sizeoflist ARG ((void)),
    fun_str_el ARG ((void)),
    fun_copy_var ARG ((void)),
    fun_system ARG ((void)),
    fun_cmd_head ARG ((void)),
    fun_inc ARG ((void)),
    fun_dec ARG ((void)),
    fun_call ARG ((void)),
    fun_frame ARG ((void)),
    fun_ret ARG ((void)),
    fun_pop_reg ARG ((void)),
    fun_empty ARG ((void)),
    outstring ARG ((char *)),
    process ARG ((void)),
    push ARG ((VAR_));
