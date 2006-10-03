/*
                              P A T C H U P . C
*/

#include "iccomp.h"

void patchup(INT8 *code, unsigned len, unsigned *list, unsigned listlen,
             int pos)
{                                           /* list, listlen: list of */
    register unsigned                       /* offsets to patchup     */
        index,
        beyond_jump;
    char
        *cp,                                /* codepointer */
        jumpsize[2];

    if (!listlen)                           /* done if nothing to patchup */
        return;

    if (pos)
        pos = len;
                                            /* walk all elements to patchup */
    for (index = 0; index < listlen; index++)
    {
        beyond_jump = list[index];
            /*
                beyond-jump is the offset immediately beyond the jump to
                the end of the code. This is the position where the jump
                starts after having read the jump instruction. Hence, the
                jumpsize is determined by the distance 'pos - beyond-jump',
                whereas this jumpsize must be inserted 2 bytes earlier
                than beyond_jump, as part of the jump instruction.
            */

                                            /* determine the size of the jmp */
        *(INT16 *)jumpsize = pos - beyond_jump;
        cp = (char *)code + beyond_jump - 2;/* point to codebytes to patch */

        *cp = jumpsize[0];                  /* copy byte 0 */
        *(cp + 1) = jumpsize[1];            /* copy byte 1 */
    }

    free(list);
}
