#include "lists.h"

/**
 * free_listint2 - frees a listint lists
 * @head: points to lists
 */
void free_listint2(listint_t **head)
{
	listint_t *free2;


	if (head == NULL)
	{
		return;
	}
	else
	{
		while (*head)
		{
			free2 = *head;
			*head = free2->next;
			free(free2);
		}
		*head = NULL;
	}
}
