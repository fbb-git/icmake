/* included by lexer */

int sc_popFile()
{
    state_eof(yylineno);

    yypop_buffer_state();
    yylineno = filestack_tos()->popLineNr;
    filestack_pop();
    msg("returning to previous file");

    size_t size = filestack_size();
    if (size)
        (*sc_ptr)();
    else
        sc_eof = 1;

    return size;
}
