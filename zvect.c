#include "ziroxLib.h"


zvect_string_t *vect_string()
{
    zvect_string_t *new_vector = malloc(sizeof(zvect_string_t));
    if (!new_vector)
        return (NULL);

    new_vector->stack_mem = malloc(sizeof(char *) + 1);
    new_vector->stack_mem[0] = ziroxDup("(nil)");
    new_vector->stack_lenght = 1;
    return new_vector;
}

void *vect_strpush(zvect_string_t *vector, char *str)
{
    char **tmp;
    tmp = malloc(sizeof(char *) * (vector->stack_lenght + 2));
    char **ptr = vector->stack_mem;
    int c = 1;

    tmp[0] = ziroxDup(str);

    while(!compare(*ptr, "(nil)"))
    {
        tmp[c] = ziroxDup(*ptr);
        *(ptr++); 
        c++;
    }
    tmp[vector->stack_lenght] = ziroxDup("(nil)");
    free_stack_str(vector);
    vector->stack_mem = tmp;
    vector->stack_lenght += 1;
}