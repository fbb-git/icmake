#include "parser.ih"

static SemVal frame;

SemVal *p_stackFrame(ExprType type)
{
    frame.type = type;

    switch ((int)type)
    {
        case e_int | e_const:
            frame.evalue = atoi(util_string());
        break;

        case e_str | e_const:
            frame.evalue = p_findString(gp_stringbuf);
        break;

        default:
            frame.evalue = 0;
    }

    return &frame;
}
