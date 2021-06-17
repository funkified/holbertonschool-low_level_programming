#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head: pointer to list
 */
void free_listint(listint_t *head)
{
	listint_t *free_list = head;

	while (free_list)
	{
		head = head->next;
		free(free_list);
		free_list = head;
	}
}
