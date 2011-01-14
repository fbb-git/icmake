/*
                              P A T C H U P . C
*/

#include "iccomp.h"

void patchup(INT8 *code, size_t len, unsigned *list, size_t listlen,
             int pos)
{                                           /* list, listlen: list of */
    register size_t                       /* offsets to patchup     */
        idx,
        beyond_jump;
    char
        *cp;                                /* codepointer */

    union
    {
        char jumpsize[2];
        INT16 int16;
    } u;

    if (!listlen)                           /* done if nothing to patchup */
        return;

    if (pos)
        pos = len;
                                            /* walk all elements to patchup */
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

                                            /* determine the size of the jmp */
        u.int16 = pos - beyond_jump;
        cp = (char *)code + beyond_jump - 2;/* point to codebytes to patch */

        *cp = u.jumpsize[0];                /* copy byte 0 */
        *(cp + 1) = u.jumpsize[1];          /* copy byte 1 */
    }

    free(list);
}
