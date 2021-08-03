#include "lists.h"

/**
 * free_listint - frees memory of a list
 * @head: beggining of the list
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
