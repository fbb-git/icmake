#include "builtin.ih"

char         gb_orgDir[MAX_PATHLEN];

Variable            gb_reg;

int gb_echo = 1;
size_t gb_listIndex;           /* eb_getArg.c, noformatting.c */

char           *gb_argHead;
char           *gb_argTail;
char           *gb_cmdHead;
char           *gb_cmdTail;

        /* when the next initialization changes, verify that this is 
            in line with changes in rss/types.ih
        */
void (*gb_pBuiltinFun[])(void) =
{
    /* 0 */
    b_argHead,
    b_argTail,
    b_asciiInt,
    b_asciiString,

    /* 4 */
    b_backtick,
    b_changeBase,
    b_changeExtension,
    b_changePath,

    /* 8 */
    b_chDir,
    b_cmdHead,
    b_cmdTail,
    b_echo,

    /* c */
    b_element,
    b_backtick,
    b_exec,                       /* dummy for compiler-used */
    b_exec,                       /*     b_execute         */

    /* 10 */
    b_exists,
    b_fgets,
    b_fprintf,
    b_getBase,

    /* 14 */
    b_dotExtension,
    b_extension,
    b_path,
    b_getCh,

    /* 18 */
    b_getEnv,
    b_getPid,
    b_gets,
    b_listlen,

    /* 1c */
    b_makeList,
    b_printf,
    b_putEnv,
    b_stat,

    /* 20 */
    b_strElement,
    b_strFind,
    b_strFormat,
    b_strLength,

    /* 24 */
    b_strLower,
    b_resize,
    b_strtok,
    b_strUpper,

    /* 28 */
    b_subString,
    b_system,
    b_trim,
    b_trimLeft,

    /* 2c */
    b_trimRight,

       /* placeholders for functions that can be   */
       /* added later without having to change the */
       /* binary code                              */

    b_empty,
    b_empty,
    b_empty,
    b_empty,
    b_empty,
    b_empty,
    b_empty,
    b_empty,
    b_empty,
    b_empty,
    b_empty,
    b_empty,
    b_empty,
    b_empty,
    b_empty,
    b_empty,
    b_empty,
    b_empty,
    b_empty,
    b_empty,
    b_empty,

    /* hlt is non-existent.. */
    /* f_hlt used to mark non-existing functions */
};

void (*gb_pDestWrite)(void *dest, char const *begin, char const *end);



