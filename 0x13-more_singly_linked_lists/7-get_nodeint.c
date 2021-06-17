#include "lists.h"
/**
 * get_nodeint_at_index - functino that reutrun a nth node at index
 * @head: points to list
 * @index: index of the node startin at 0
 * Return: the nth node of the list, NUll if it doesnt exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cpy = head;
	unsigned int idx;

	if (!head)
	{
		return (NULL);
	}
	else
	{
		for (idx = 0; idx < index; idx++)
		{
			if (cpy == '\0')
			{
				return (NULL);
			}
			else
				cpy = cpy->next;
		}
	}
	return (cpy);
}
