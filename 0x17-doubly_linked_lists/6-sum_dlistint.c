#include "lists.h"

/**
 * sum_dlistint - sim of all data(n) of a dlistint linked list
 * @head: head node of list
 * Return: the sum of all data
 */

int sum_dlistint(dlistint_t *head)
{
	size_t res = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		res += head->n;
		head = head->next;
	}
	return (res);
}
