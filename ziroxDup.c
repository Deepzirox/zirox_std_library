#include "ziroxLib.h"

char *ziroxDup(char *src)
{
    char *new_str;
    int lenght = 0, into;

    if (!src)
    {
        perror("argument needs not NULL char *\n");
        exit(EXIT_FAILURE);
    }

    while(src[lenght] != '\0')
        lenght++;

    new_str = malloc(sizeof(char) * lenght + 1);

    for(into = 0; into < lenght; into++)
    {
        new_str[into] = src[into];
    }

    new_str[lenght] = '\0';

    return (new_str);
}