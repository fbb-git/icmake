#include "linear.ih"

/*
                xxxxxxxxxxxx
                ^
                repl


            ................${.......}..............
            ^               ^        ^
            def             begin    end

Changes to:

            ................xxxxxxxxxxxx................
            ^                           ^
            def                         begin


*/
char *l_updateDefinition(char *def, char **begin, char *end, char const *repl)
{
                                            /* append what's beyond ${...} to 
                                               definition of ${...}         */
    char *new = rss_strcat(rss_strdup(repl), end + 1);


    **begin = 0;                        /* end curr. def. at ${...}     */

                                        /* length of the processed section */
    size_t doneLength = *begin - def + strlen(repl);                     

    def = rss_strcat(def, new);         /* append replacement + org tail*/
    free(new);

    *begin = def + doneLength;          /* continue replacing at *begin     */

    return def;                         /* new def. location            */
}
