#include "lists.h"

/**
 * dlistint_len - measure lenght of a doubly linked list
 * @h: head
 * Return: size of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
