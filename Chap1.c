#include "Chap1.h"

int 
main(void)
{
    int n;
    char buf[BUFFSIZE];

    while ((n = read(STDIN_FILENO, buf, BUFFSIZE)) > 0)
    {
        if (write(STDOUT_FILENO, buf, n) != n)
        {
            printf("write Error.\n");
        }
    }
    if (n < 0)
        printf("read error.\n");

    exit(0);
}
