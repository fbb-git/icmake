#include "builtin.ih"

VAR_            reg;

int echo = 1;

char           *arghead;
char           *argtail;
char           *cmdhead;
char           *cmdtail;

void (*builtinfun[])(void) =
 {
     fun_arg_head,
     fun_arg_tail,
     fun_ascii_int,
     fun_ascii_str,
     fun_backtick,
     fun_c_base,
     fun_c_ext,
     fun_c_path,
     fun_chdir,
     fun_cmd_head,
     fun_cmd_tail,
     fun_echo,
     fun_element,
     fun_exec,                       /* dummy for compiler-used */
     fun_exec,                       /*     fun_execute         */
     fun_exists,
     fun_fgets,
     fun_fields,
     fun_fprintf,
     fun_g_base,
     fun_g_dext,
     fun_g_ext,
     fun_g_path,
     fun_getch,
     fun_getenv,
     fun_getpid,
     fun_gets,
     fun_makelist,
     fun_printf,
     fun_putenv,
     fun_sizeoflist,
     fun_stat,
     fun_str_el,
     fun_strfind,
     fun_strformat,
     fun_strlen,
     fun_strlwr,
     fun_strupr,
     fun_substr,
     fun_system,
     fun_trim,
     fun_trimleft,
     fun_trimright,

        /* placeholders for functions that can be   */
        /* added later without having to change the */
        /* binary code                              */

     fun_empty,
     fun_empty,
     fun_empty,
     fun_empty,
     fun_empty,
     fun_empty,
     fun_empty,
     fun_empty,
     fun_empty,
     fun_empty,
     fun_empty,
     fun_empty,
     fun_empty,
     fun_empty,
     fun_empty,
     fun_empty,
     fun_empty,
     fun_empty,
     fun_empty,
     fun_empty,
     fun_empty,

     /* fun_hlt is non-existent.. */
     /* f_hlt used to mark non-existing functions */
 };

void (*p_destWrite)(void *dest, char const *begin, char const *end);



