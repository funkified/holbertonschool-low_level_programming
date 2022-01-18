#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for the value of
 * a sorted array using jump search algorithm
 * @array: poinetr to the array to search in
 * @size: nu,ber of element in the array
 * @value: is the value to search for
 * Return: the first indez where value is located, if value is not present or
 * if array is NULL, return -1
 */

int jump_search(int *array, size_t size, int value)
{
        size_t i, j, step;

        step = (size_t)sqrt(size);

        if (!array || size == 0)
                return (-1);

        for (i = 0; i < size; i += step)
        {
            /*printf("Before Value checked array[%d] = [%d]\n", array[i], array[value]);*/
            if (array[i] >= value)
                    break;
            printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        }

        i -= (i > 0 ? step : 0);
        printf("Value found in between indexes [%lu] = [%lu]\n", i, i + step);

        for (j = i; j <= min(size - 1, i + step) && array[j] <= value; j++)
        {
            printf("Value found between indexes [%lu] = [%d]\n", j, array[j]);
            if (array[j] == value)
                    return (j);
        }
        return (-1);
}
