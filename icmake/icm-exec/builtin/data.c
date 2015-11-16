#include "builtin.ih"

VAR_            reg;

int echo = 1;
size_t listIndex;           /* eb_getArg.c, noformatting.c */

char           *arghead;
char           *argtail;
char           *cmdhead;
char           *cmdtail;

void (*p_builtinfun[])(void) =
{
    /* 0 */
    builtin_argHead,
    builtin_argTail,
    builtin_asciiInt,
    builtin_asciiString,

    /* 4 */
    builtin_backtick,
    builtin_changeBase,
    builtin_changeExtension,
    builtin_changePath,

    /* 8 */
    builtin_chDir,
    builtin_cmdHead,
    builtin_cmdTail,
    builtin_echo,

    /* c */
    builtin_element,
    builtin_backtick,
    builtin_exec,                       /* dummy for compiler-used */
    builtin_exec,                       /*     builtin_execute         */

    /* 10 */
    builtin_exists,
    builtin_empty,      /* FBB: was   builtin_exit, */
    builtin_fgets,
    builtin_fields,

    /* 14 */
    builtin_fprintf,
    builtin_getBase,
    builtin_dotExtension,
    builtin_extension,

    /* 18 */
    builtin_path,
    builtin_getCh,
    builtin_getEnv,
    builtin_getPid,

    /* 1c */
    builtin_gets,
    builtin_listlen,
    builtin_makeList,
    builtin_printf,

    /* 20 */
    builtin_putEnv,
    builtin_stat,
    builtin_strElement,
    builtin_strFind,

    /* 24 */
    builtin_strFormat,
    builtin_strLength,
    builtin_strLower,
    builtin_strUpper,

    /* 28 */
    builtin_subString,
    builtin_system,
    builtin_trim,
    builtin_trimLeft,

    /* 2c */
    builtin_trimRight,

       /* placeholders for functions that can be   */
       /* added later without having to change the */
       /* binary code                              */

    builtin_empty,
    builtin_empty,
    builtin_empty,
    builtin_empty,
    builtin_empty,
    builtin_empty,
    builtin_empty,
    builtin_empty,
    builtin_empty,
    builtin_empty,
    builtin_empty,
    builtin_empty,
    builtin_empty,
    builtin_empty,
    builtin_empty,
    builtin_empty,
    builtin_empty,
    builtin_empty,
    builtin_empty,
    builtin_empty,
    builtin_empty,

    /* hlt is non-existent.. */
    /* f_hlt used to mark non-existing functions */
};

void (*p_destWrite)(void *dest, char const *begin, char const *end);



