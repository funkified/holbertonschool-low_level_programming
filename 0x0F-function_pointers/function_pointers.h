#ifndef __FUNCTION_POINTERS__
#define __FUNCTION_POINTERS__

#include <stdio.h>
#include <stdlib.h>

void print_name_as_is(char *name);
void print_name(char *name, void (*f)(char *));

#endif
