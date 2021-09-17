#include "lists.h"

/**
 * add_dnodeint_end - add node ath the end
 * @head: start of list
 * @n: new element
 * Return: address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *temp = NULL;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	temp = *head;

	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}
	if (temp->next != NULL)
	{
		temp = temp->next;
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	new->prev = temp;
	return (new);

}
