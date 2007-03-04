#include "../rss/icrssdef.h"

extern BIN_HEADER_
    *headerp;

extern char
    invalid_macro_file [],
    *funname [],
    release[],
    version [];

extern void
    (*procfun []) (void);

extern FILE
    *infile;

extern INT8
    *local_types;

extern size_t
    curoffs,
    nvar;

extern VAR_
    *var;

extern char
    *varname (E_TYPE_),
    *printvar (int);

extern void
    dumpchar(int),
    dumpint (int),
    dumpstring (char *),
    fun_jmp (void),
    fun_jmp_false (void),
    fun_jmp_true (void),
    fun_push_1_jmp_end (void),
    fun_push_0 (void),
    fun_push_imm (void),
    fun_push_strconst (void),
    fun_push_var (void),
    fun_push_reg (void),
    fun_pop_var (void),
    fun_umin (void),
    fun_atoi (void),
    fun_itoa (void),
    fun_atol (void),
    fun_mul (void),
    fun_div (void),
    fun_mod (void),
    fun_add (void),
    fun_sub (void),
    fun_eq (void),
    fun_neq (void),
    fun_sm (void),
    fun_gr (void),
    fun_younger (void),
    fun_older (void),
    fun_smeq (void),
    fun_greq (void),
    fun_exit (void),
    fun_asp (void),
    fun_ret (void),
    fun_copy_var (void),
    fun_inc (void),
    fun_dec (void),
    fun_call (void),
    fun_call_rss (void),
    fun_frame (void),
    fun_ret (void),
    fun_pop_reg (void),
    fun_ascii (void),
    process (void),
    fun_band(void),
    fun_bor(void),
    fun_bnot(void),
    fun_xor(void),
    fun_shl(void),
    fun_shr(void);
