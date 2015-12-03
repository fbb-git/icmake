#include "parser.ih"

void parser(char **argv)
{
    p_im = rss_strdup(getenv("IM"));

    state_init();
    p_filename = rss_strdup(argv[1]);
    out_init(p_filename, argv[2]);
    scanner(p_filename, out_atEOF());
}



