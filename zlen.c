#include "ziroxLib.h"

int zlen(char *str)
{
    int c = 0;

    while(str[c] != '\0')
    {
        c++;
    }

    return (c);
}