#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update key/value
 * @key: key
 * @value: value associate with the key. Must be duplicated
 * Return: 1 if success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node = NULL, *temp;

	if (!ht || !key || !value)
		return (0);
	if (strcmp(key, "") == 0)
		return (0);

	idx = key_index((const unsigned char *) key, ht->size);

	temp = ht->array[idx];
	while (temp && strcmp(key, temp->key) != 0)
		temp = temp->next;
	if (temp)
	{
		free(temp->next);
		temp->value = strdup(value);
	}
	else
	{
		node = malloc(sizeof(hash_table_t));
		if (node == NULL)
			return (0);
		node->key = strdup(key);
		node->value = strdup(value);
		node->next = ht->array[idx];
		ht->array[idx] = node;
	}
	return (1);
}

