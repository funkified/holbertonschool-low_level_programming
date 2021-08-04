#include "lists.h"

/**
 * free_list - free memory of a linked list
 * @head: first node of the list
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
