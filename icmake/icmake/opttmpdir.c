
/* #define msg
*/

#include "icmake.ih"

void optTmpDir()
{
    free(tmpDir);
    tmpDir = rss_strdup(optarg);

    if (tmpDir[strlen(tmpDir) - 1] != '/')      /* tmpDir must end in / */
        tmpDir = rss_strcat(tmpDir, "/");
}
    
