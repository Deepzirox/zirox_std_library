#include "ziroxLib.h"

size_t vect_strlen(zvect_string_t *vector)
{
    char **tmp = vector->stack_mem;
    size_t n_stacks = 1;

    while (!compare(*tmp, "(nil)"))
    {
        n_stacks++;
        *(tmp++);
    }

    return n_stacks;
}

void free_stack_str(zvect_string_t *stack)
{
    int c = 0;

    while (c != stack->stack_lenght)
    {
        free(stack->stack_mem[c]);
        c++;
    }
    free(stack->stack_mem);
}