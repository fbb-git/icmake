#include "parser.ih"

void parser(char **argv)
{
    p_im = rss_strdup(getenv("IM"));

    state_init();
    out_init(argv[1], argv[2]);
    scanner(argv[1], out_atEOF());
}



