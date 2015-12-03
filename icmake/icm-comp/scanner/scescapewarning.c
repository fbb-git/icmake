#include "scanner.ih"

void sc_escapeWarning(int ch)
{
    rss_warning(gs_fileStack[gs_fileSp].fname, yylineno, 
                "non-standard escape sequence `\\%c' in string", ch);
}
