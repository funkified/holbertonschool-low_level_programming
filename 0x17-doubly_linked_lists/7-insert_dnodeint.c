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
	dlistint_t *temp, *new;
	unsigned int index;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx > dlistint_len(*h))
		return (NULL);
	if (idx == dlistint_len(*h))
		return (add_dnodeint_end(h, n));

	while (index != idx)
	{
		if (temp == NULL)
		{
			free(temp);
			return (NULL);
		}
		temp = temp->next;
		index++;
	}
	temp->prev->next = new;
	new->next = temp;
	new->prev =  temp->prev;
	temp->prev = new;
	return (new);
}
