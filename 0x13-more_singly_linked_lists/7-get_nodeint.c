#include "lists.h"

/**
 * get_nodeint_at_index - return the nthnode of a list
 * @head: node
 * @index: index of node starting at 0
 * Return: the nth node in a list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < index; i++)
		{
			if (temp == NULL)
			{
				return (NULL);
			}
			else
				temp = temp->next;
		}
	}
	return (temp);
}
