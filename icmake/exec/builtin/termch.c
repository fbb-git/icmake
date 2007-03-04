/*
    Enter a single char without \n on systems supporting termios.
    If things fail, fall back to `enterch()'
*/

#include <termios.h>
#include "builtin.ih"

int termch(void)
{
    struct termios saved;
    struct termios tattr;
    int key;

    if (tcgetattr(STDIN_FILENO, &saved))
    {
        fprintf(stderr, "Single key input failed. Press `Enter' as well\n");
        return enterch();
    }
    
    tcgetattr(STDIN_FILENO, &tattr);    /* can't assign saved to tattr */

    tattr.c_lflag &= ~(ICANON | ECHO);
    tattr.c_cc[VMIN] = 1;
    tattr.c_cc[VTIME] = 0;
    
    if (tcsetattr(STDIN_FILENO, TCSAFLUSH, &tattr))
    {
        fprintf(stderr, "Single key input failed. Press `Enter' as well\n");
        return enterch();
    }

    key = getchar();
    printf("%c\n", key);    

    tcsetattr(STDIN_FILENO, TCSANOW, &saved);

    return key;
}






