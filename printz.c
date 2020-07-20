#include "ziroxLib.h"

void printz(char *str)
{

    int len = zlen(str), i;

    if (!str)
    {
        perror("Argument of println can't be NULL");
        exit(EXIT_FAILURE);
    }

    for(i = 0; i < len; i++)
    {
        zchar(str[i]);
    }

    zchar('\n');

}