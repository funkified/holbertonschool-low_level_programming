#include "lists.h"

/**
 * free_dlistint - free list
 * @head: head node
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
