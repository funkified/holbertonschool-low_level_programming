#include "lists.h"

/**
*add_node - add node at the end of list
 *@str: constant pointer
 *@head: start of list
 *Return: th eaddress of the new element or NULL if failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int i = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	if (str == NULL)
	{
		node->str = NULL;
		node->len = 0;
	}
	else
	{
		node->str = strdup(str);
		for (i = 0; str[i]; i++)
			;
		node->len = i;
	}
	node->next = *head;
	*head = node;
	return (node);
}
