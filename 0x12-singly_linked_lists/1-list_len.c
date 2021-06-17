#include "lists.h"

/**
 * list_len - print the nmber of elemetns in a linked list
 *@h: pointer to list
 *Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);

}
