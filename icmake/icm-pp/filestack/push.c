#define msgx
#include "filestack.ih"

void filestack_push(unsigned currentLineNr, char const *fname)
{
    fs_stack = rss_realloc(fs_stack, (fs_size + 1) * sizeof(FileStack));

    if (! (fs_stack[fs_size].file = fopen(fname, "r")) )
        rss_fatal(0, 0, "cannot open #include file `%s'", fname);
    
    fs_stack[fs_size].filename = rss_strdup(fname);
    fs_stack[fs_size].popLineNr = currentLineNr;

    msg("Pushed file %u: `%s'", fs_size, fname);

    ++fs_size;
}
