#include "builtin.ih"

Variable            reg;

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
    builtin_fgets,
    builtin_fields,
    builtin_fprintf,

    /* 14 */
    builtin_getBase,
    builtin_dotExtension,
    builtin_extension,
    builtin_path,

    /* 18 */
    builtin_getCh,
    builtin_getEnv,
    builtin_getPid,
    builtin_gets,

    /* 1c */
    builtin_listlen,
    builtin_makeList,
    builtin_printf,
    builtin_putEnv,

    /* 20 */
    builtin_stat,
    builtin_strElement,
    builtin_strFind,
    builtin_strFormat,

    /* 24 */
    builtin_strLength,
    builtin_strLower,
    builtin_strUpper,
    builtin_subString,

    /* 28 */
    builtin_system,
    builtin_trim,
    builtin_trimLeft,
    builtin_trimRight,

    /* 2c */

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



