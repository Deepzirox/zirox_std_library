#ifndef ZIROXLIB
#define ZIROXLIB

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define bytes_t size_t

typedef struct vect_str
{
    char **stack_mem;
    size_t stack_lenght;
    bytes_t total_bytes;
} zvect_string_t;

typedef struct vect_int
{
    char **stack_mem;
    size_t stack_lenght;
    bytes_t total_bytes;
} zvect_int_t; 


int compare(char *str1, char *str2);
zvect_string_t *vect_string();
size_t vect_strlen(zvect_string_t *vector);
void *vect_strpush(zvect_string_t *vector, char *str);
void free_stack_str(zvect_string_t *stack);

/** Simple hello worl saying all is fine **/
void sayHi();
/** zlen **/
int zlen(char *str);
/** Duplicate of Strdup with 0 NULL src tolerance **/
char *ziroxDup(char *src);
/** Duplicate of putchar **/
void zchar(char digit);
/** Print string with a new line **/
void printz(char *str);
/**Concat two string with delim (optional)**/
char *zcat(char *str1, char *str2, char delim);
/** Get lenght of string of termination '\0' **/
int zilen(char *str);

#endif