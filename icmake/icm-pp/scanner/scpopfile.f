/* included by lexer */

int sc_popFile()
{
    yypop_buffer_state();
    sc_lastLineNr = yylineno;
    yylineno = filestack_tos()->popLineNr;
    filestack_pop();
    msg("returning to previous file");

    size_t size = filestack_size();
    if (size)
        (*sc_ptr)();
    else
    {
        state_eof();
        sc_eof = 1;
    }

    return size;
}
