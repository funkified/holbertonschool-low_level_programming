#include "lists.h"

/**
 * list_len - print number of elements on a linked list
 * @h: list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
