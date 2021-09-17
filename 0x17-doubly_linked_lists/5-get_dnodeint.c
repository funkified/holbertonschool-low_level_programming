#include "lists.h"

/**
 * get_dnodeint_at_index - getst the nth node of a dlistint
 * @head: head ndoe
 * @index: index of the node starting from 0
 * Return: NULL if node doestnt exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count;

	for (count = 0; head != NULL; count++)
	{
		if (count == index)
			break;
		head = head->next;
	}
	return (head);
}
