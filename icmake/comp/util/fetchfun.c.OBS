#include "util.ih"

size_t fetchfun()
{
    register size_t idx;
                                            /* test function defined */
    if ((idx = looksym(&g_funtab)) == g_funtab.n_defined)
        semantic("Function '%s()' not defined", g_lexstring);

    return idx;
}
