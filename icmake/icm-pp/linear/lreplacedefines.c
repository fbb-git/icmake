#include "linear.ih"

char *l_replaceDefines(char *definition)
{
    char *begin = definition;
    size_t replacement = 0;

    while ((begin = strstr(begin, "${")))   /* find the opening characters  */
    {
        char *end = strchr(begin, '}');     /* find the end-brace           */
        
        if (end == NULL)                    /* none found, then done        */
            break;

        *end = 0;                           /* end the ID                   */

                                            /* look for the identifier  */
        Linear const *item = linear_search(begin + 2);

        if (item == NULL)                   /* not found: keep ${...}       */
        {
            *end = '}';                     /* restore the brace            */
            begin = end + 1;                /* continue beyond ${...}       */
            continue;
        }
            
        if (++replacement > maxReplacements)
            rss_error("%s: %d: too many replacements in #define definition",
               filestack_tos()->filename, scanner_lineNr());


        definition = l_updateDefinition(definition, &begin, end,
                                                        item->definition); 
    }    

    return definition;
}    

