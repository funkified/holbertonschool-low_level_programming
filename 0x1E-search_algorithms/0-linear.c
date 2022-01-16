#include "search_algos.h"

/**
 * linear_search - searches for value in  array of integers using linear search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements of the array
 * @value: value to sear for
 * Return: the first index where value is located if value is not present or
 * if array is NULL, return -1
 */

int linear_search(int *array, size_t size, int value)
{
    size_t idx;

    if (array == NULL)
        return(-1);

    for (idx = 0; idx < size; idx++)
    {
        printf("Value checked array[%li] = [%d]\n", idx, array[idx]);
        if (array[idx] == value)
        {
            return(idx);
        }
    }
    return (-1);
}
