#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of list
 * @index: index of the node to be deleted
 * @head: head of the node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del;
	unsigned int idx = 0;

	if (*head == NULL || head == NULL)
		return (-1);
	del = *head;
	if (idx == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(del);
		return (1);
	}
	for ( ; del->next != NULL && idx != index; idx++)
		del = del->next;
	if (*head == del)
		*head = del->next;
	if (index == 0)
	{
		del->prev->next = del->next;
		if (del->next != NULL)
		{
			del->next->prev = del->prev;
		}
		free(del);
		return (1);
	}
	return (-1);
}
