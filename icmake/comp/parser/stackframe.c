#include "parser.ih"

static SemVal frame;

SemVal *stackframe(ExprType type)
{
    frame.type = type;

    switch ((int)type)
    {
        case e_int | e_const:
            frame.evalue = atoi(g_lexstring);
        break;

        case e_str | e_const:
            frame.evalue = lookstring(g_stringbuf);
        break;

        default:
            frame.evalue = 0;
    }

    return &frame;
}
