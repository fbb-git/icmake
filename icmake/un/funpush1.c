#include "icmun.ih"

void fun_push_1_jmp_end ()
{
    printf ("        push int 1, jmp [%s]\n", 
                    rss_hexString((size_t)(curoffs + 2), 4));
}
