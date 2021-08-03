#include "lists.h"

/**
 * free_listint2 - free memory of a list and set head to NULL
 * @head: node to beggining of list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}
	else
	{
		while (*head)
		{
			temp = *head;
			*head = temp->next;
			free(temp);
		}
		*head = NULL;
	}
}
