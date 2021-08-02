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
	list_t *end_node;
	int i = 0;

	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		;
	new->str = strdup(str);
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		end_node = *head;
		while (end_node->next != NULL)
		{
			end_node = end_node->next;
		}
		end_node->next = new;
	}
	return (new);
}

