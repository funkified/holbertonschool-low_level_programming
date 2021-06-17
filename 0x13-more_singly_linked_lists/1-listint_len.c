#include "lists.h"
/**
 * listint_len -print the number of elements in linked list
 * @h: pointer to head of list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
