#include "lists.h"
#include <stdio.h>
/*
 */

size_t print_list(const list_h *h)
{
	int count = 0;

	if (h == NULL)
		return (-1);
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
		count++;
		h = h->next;
	}
	return (count);
}
