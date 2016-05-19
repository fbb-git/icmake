#include "parser.ih"

void p_patchup(int8_t *code, unsigned len, unsigned *list, unsigned listlen, int pos)
{                                           /* list, listlen: list of */
    register unsigned idx;                    /* offsets to p_patchup     */
    register unsigned beyond_jump;
    char *cp;                               /* codepointer */

    union
    {
        char jumpsize[2];
        int16_t int16;
    } u;

    if (!listlen)                           /* done if nothing to p_patchup */
        return;

    if (pos)
        pos = len;
                                            /* walk all elements to p_patchup */
    for (idx = 0; idx < listlen; idx++)
    {
        beyond_jump = list[idx];
            /*
                beyond-jump is the offset immediately beyond the jump to
                the end of the code. This is the position where the jump
                starts after having read the jump instruction. Hence, the
                jumpsize is determined by the distance 'pos - beyond-jump',
                whereas this jumpsize must be inserted 2 bytes earlier
                than beyond_jump, as part of the jump instruction.
            */

        u.int16 = pos - beyond_jump;        /* determine the size of the jmp */

        cp = (char *)code + beyond_jump - 2;/* point to codebytes to patch */

        *cp = u.jumpsize[0];                /* copy byte 0 */
        *(cp + 1) = u.jumpsize[1];          /* copy byte 1 */
    }

    free(list);
}
