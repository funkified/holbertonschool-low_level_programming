#include "lists.h"

/**
 * add_node_end - adds node at the end of the list
 * @head: beggining of list
 * @str: string to add
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp;
	int i;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	if (str == NULL)
	{
		new->str = NULL;
		new->len = 0;
	}
	else
	{
		for (i = 0; str[i]; i++)
			;
		new->str = strdup(str);
		new->len = i;
	}
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
		while (tmp->next != NULL)
			tmp = tmp->next;
	(tmp)->next = new;

	return (new);
}

