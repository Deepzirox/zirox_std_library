#include "ziroxLib.h"

int compare(char *str1, char *str2)
{
    int total1, t_one, total2, t_two;

    for (
        total1 = 0, t_one = 0; 
        str1[t_one] != '\0'; 
        t_one++, total1 += str1[t_one]
        );

    for (
        total2 = 0, t_two = 0; 
        str2[t_two] != '\0'; 
        t_two++, total2 += str2[t_two]
        );

    return (total1 == total2) ? 1 : 0;
}