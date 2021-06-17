#include "lists.h"
#include <string.h>
#include <limits.h>
/**
 * add_nodeint - adds a new node at the beggining ofa list
 * @head: points to start of list
 * @n: interger
 * Return: the address of new element, NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (head == NULL)
	{
		return (0);
	}
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
