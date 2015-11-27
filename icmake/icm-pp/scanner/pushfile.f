/* included by lexer */

void scanner_pushFile(char const *filename)
{
    if (state_active())
    {
        msg("pushing %s %u", filename, YY_BUF_SIZE);

        yypush_buffer_state(
            yy_create_buffer(
                sc_pushFile(filename), YY_BUF_SIZE
            )
        );

        msg("pushed `%s'", filename);
    }
}
