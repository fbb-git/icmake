#define msgx

#include "icmake.ih"

void optTmpDir()
{
    free(tmpDir);
    tmpDir = rss_strdup(optarg);

    if (tmpDir[strlen(tmpDir) - 1] != '/')      /* tmpDir must end in / */
        tmpDir = rss_strcat(tmpDir, "/");

    char pidStr[20];
    snprintf(pidStr, 20, "%u", getpid());

    tmpDir = rss_strcat(tmpDir, pidStr);
}
    
