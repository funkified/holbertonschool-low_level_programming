#include "lists.h"

/**
 * reverse_listint - reverswe a linked list
 * @head: head node
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr;
	listint_t *prev;

	if (*head == NULL)
	{
		return (NULL);
	}
	prev = *head;
	curr = prev->next;
	*head = prev->next;
	prev->next = NULL;

	while (*head != NULL)
	{
		*head = (*head)->next;
		curr->next = prev;
		prev = curr;
		curr = *head;
	}
	*head = prev;

	return (*head);
}
