#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint
 * @head: pointer to head node
 * Return: the head node's data, 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *cpy = *head;
	int idx;

	if (!*head)
	{
		return (0);
	}
	else
	{
		idx = cpy->n;
		*head = cpy->next;
		free(cpy);
	}
	return (idx);
}
