#include "lists.h"

/**
 * reverse_listint - reverswe a linked list
 * @head: head node
 * Return: a pointer to the first node of the reversed list
 */

listint_t reverse_listint(listint_t **head)
{
	listint_t *curr = *head;
	listint_t *prev = NULL;

	if (curr != NULL)
	{
		prev = *head;
		curr = curr->next;
		*head = curr->next;
	}
	prev->next = NULL;

	while (*head != NULL)
	{
		*head = curr->next;
		curr->next = prev;
		prev = curr;
		curr = *head;
	}
	*head = prev;

	return (*prev);
}
