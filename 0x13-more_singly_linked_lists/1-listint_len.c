#include "lists.h"

/**
 * listint_len - counts the number of elements in a linked list
 * @h: pointer to the head of the list
 * Return: numbre of elemets in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
