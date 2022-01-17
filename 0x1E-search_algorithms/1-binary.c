#include "search_algos.h"
/**
 * binary_search - seaches for a value in a sorted array of integers
 * using Binary Search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the indez where value is located
 * if the value is not present in array or if array is NULL, return -1
 */

int binary_search(int *array, size_t size, int value)
{
    size_t i = 0;
    size_t start = 0;
    size_t end = size - 1;
    int mid = 0;

    if (!array)
        return (-1);

    while (start <= end)
    {
        printf("Searching in array: ");
        for(i = start; i <= end; i++)
        {
            if (i != end)
                printf("%d, ", array[i]);
            else
                printf("%d,\n", array[i]);
        }
        mid = (end + start) / 2;
        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            start = mid + 1;
        if (array[mid] > value)
            end = mid - 1;
    }
    return (-1);
}
