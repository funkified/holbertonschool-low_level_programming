#include "lists.h"

/**
 *add_node - add node at the end of list
 *@str: constant pointer
 *@head: start of list
 *Return: th eaddress of the new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	unsigned int i = 0;

	if (new == NULL)
		return (NULL);

	if (str == NULL)
	{
		new->str = NULL;
		new->len = 0;
	}
	else
	{
		new->str = strdup(str);
		for (i = 0; str[i]; i++)
			;
		new->len = i;
	}
	new->next = *head;
	*head = new;
	return (new);
}
