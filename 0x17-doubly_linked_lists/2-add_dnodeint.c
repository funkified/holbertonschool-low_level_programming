#include "lists.h"

/**
 * add_dnodeint - add a new node at the begginnig of a list
 * @head: start of the list
 * @n: new node
 * Return: the address of new element or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (head == NULL || new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (head != NULL)
	{
		*head = new;
	}
	return (new);
}
