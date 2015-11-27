/* included by lexer */

int sc_popFile()
{
    yypop_buffer_state();
    yylineno = filestack_tos()->popLineNr;
    filestack_pop();
    msg("returning to previous file");

    size_t size = filestack_size();
    if (size)
        (*sc_ptr)();

    return size;
}
