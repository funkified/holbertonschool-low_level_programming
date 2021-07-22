#ifndef __FUNCTION_POINTERS__
#define __FUNCTION_POINTERS__

#include <stdio.h>
#include <stdlib.h>

void print_name_as_is(char *name);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int *cmp(int elem);
int int_index(int *array, int size, int (*cmp)(int));
#endif
