#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at given position
 * @head: head of node
 * @idx: index of the list
 * @n: data of node
 * Return: the address of the new node or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *new_node = malloc(sizeof(listint_t));
	unsigned int i;

	if (head == NULL)
	{
		*head = new_node;
	}
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = temp;
	if (idx == 1)
	{
		temp->next = temp;
		*head = temp;
	}
	for (i = 1; i < idx; i++)
	{
		if (idx == '\0')
		{
			free(temp->next);
			return (NULL);
		}
		temp = temp->next;
	}
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
