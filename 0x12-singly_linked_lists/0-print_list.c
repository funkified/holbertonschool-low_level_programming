#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elemts of a list_t list
 * @h: Pointer ot list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	if (h == NULL)
		return (s);

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
			else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		s++;
	}
	return (s);
}
