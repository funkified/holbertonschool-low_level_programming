#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a node a given index
 * @h: head node
 * @idx: node index
 * @n: data o fnode
 * Return: the address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 1;
	dlistint_t *temp = NULL, *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || h == NULL)
		return (NULL);
	new->n = n;
	temp = *h;
	if (idx == 0)
	{
		*h = new;
		new->next = temp;
		new->prev = NULL;
		temp->prev = new;
		return (new);
	}
	while (temp->next != NULL)
	{
		if (count == idx)
		{
			new->prev = temp;
			new->next = temp->next;
			temp->next = new;
			new->next->prev = new;
		}
		temp = temp->next;
		count++;
	}
	if (count == idx)
	{
		new->prev = temp;
		new->next = NULL;
		temp->next = new;
	}
	if (count < idx)
	{
		free(new);
		return (NULL);
	}
	return (new);
}
