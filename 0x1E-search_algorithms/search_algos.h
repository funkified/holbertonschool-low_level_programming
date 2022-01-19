#ifndef __SEARCH_ALGOS_H__
#define __SEARCH_ALGOS_H__

#define min(a, b) ((a) <= (b) ? (a) : (b))
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
#endif
