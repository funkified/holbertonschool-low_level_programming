#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdio.h>

/* prototypes */
char *create_array(unsigned int size, char c);
char *str_concat(char *s1, char *s2);
char *_strdup(char *str);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
int word_count(char *str);
/* misc prototypes*/
int _strlen(char *s);

#endif
