
#define msgx

#include "out.ih"

void out(char const *text)
{
    msg("%u %s", state_active(), text);

    if (state_active())
    {
        if (o_nl != 0)
            o_newLines();
        else if (o_space)
        {
            o_space = 0;
            fputc(' ', o_file);
        }

        fprintf(o_file, "%s", text);
        o_atBOL = 0;
    }
}
