#include "lists.h"

/**
 * free_list - free memory of a linked list
 * @head: first node of the list
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
