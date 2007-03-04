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
    
         fun_g_base,         fun_getch,
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
         fun_backtick,
         fun_empty,
         fun_empty,
         fun_empty,
         fun_empty,
    
         /* fun_hlt is non-existent.. */
         /* f_hlt used to mark unexisting functions */
     };
