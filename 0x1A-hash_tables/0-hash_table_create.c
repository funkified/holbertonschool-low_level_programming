#include "hash_tables.h"

/**
 * hash_table_create - creates a hass table
 * @size: size of the array
 * Return: pointer to newley created ahsh table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int idx;
	hash_table_t *new;

	if (size <= 0)
		return (NULL);

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);
	new->size = size;
	new->array = malloc(size * sizeof(hash_node_t *));
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}
	for (idx = 0; idx < size; idx++)
		new->array[idx] = NULL;
	return (new);
}
