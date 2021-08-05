#include "lists.h"

/**
 * delete_nodeint_at_index - dleete a node at givven index
 * @head: head of node
 * @index: index of the node
 * Return: 1 if it succeeeded -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *next;

	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (i < index - 1 && temp != NULL)
	{
		temp = temp->next;
		{
			if (temp == NULL || temp->next == NULL)
			{
				return (-1);
			}
			i++;
		}
	}
	next = temp->next->next;
	free(temp->next);
	temp->next = next;
	return (1);
}
