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
	while (del->next != NULL)
	{
		del = del->next;
		idx++;
		if (idx == index)
		{
			del->next->prev = del->prev;
			del->prev->next = NULL;
		}
		free(del);
		return (1);
	}
	return (-1);
}
