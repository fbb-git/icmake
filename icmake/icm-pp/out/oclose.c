#define msgx

#include "out.ih"

void o_close()
{
    fputc('\n', o_file);
    fclose(o_file);
}
