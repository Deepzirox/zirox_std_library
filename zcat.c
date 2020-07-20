#include "ziroxLib.h"

char *zcat(char *str1, char *str2, char delim)
{
    int len1, len2, to_alloc, i, i2;
    char *new_str;

    if (!str1 || !str2)
    {
        perror("String arguments can't be NULL\n");
        exit(EXIT_FAILURE);
    }

    len1 = zlen(str1);
    len2 = zlen(str2);

    to_alloc = len1 + len2;
    if (delim != '\0') 
        to_alloc++;

    new_str = malloc(sizeof(char) * to_alloc + 1);

    for(i = 0; i < len1; i++)
    {
        if (str1[i] != '\0')
        {
            new_str[i] = str1[i];
        }
    }
    if (delim != '\0')
        new_str[i++] = delim;

    for(i2 = 0; i2 < len2; i2++, i++)
    {
        if(str2[i2] != '\0')
        {
            new_str[i] = str2[i2];
        }
    }
    new_str[to_alloc] = '\0';
    
    return (new_str);
}