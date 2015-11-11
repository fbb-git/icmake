#include "icmake.ih"

void copyright(char const *program)
{
    if (!(flags & f_quiet))
        rss_copyright(program);
}
