#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of list
 * @head: beggining of list
 * @n: inter pointer
 * Return: the addres of the new element, or NULL if faild
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *last = *head;
	unsigned int i = 0;

	if (new_node == NULL)
	{
		return (NULL);
	}
		new_node->n = n;
		new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (last->next)
		{
			last = last->next;
			i++;
		}
		last->next = new_node;
	}
	return (new_node);
}
