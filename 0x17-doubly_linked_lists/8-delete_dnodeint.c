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
	if (del == NULL)
		return (-1);
	for (idx = 0; del->next != NULL && idx < index; idx++)
		del = del->next;
	if (*head == del)
		*head = del->next;
	if (del->prev != NULL && idx == index)
		del->prev->next = del->next;
	free(del);
	return (1);
}
