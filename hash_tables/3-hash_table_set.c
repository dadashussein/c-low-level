#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_set - adds an element
 * @ht: hash table
 * @key: key
 * @value: value associated key
 *
 * Return: 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *newElement;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	newElement = malloc(sizeof(hash_node_t));
	if (newElement == NULL)
		return (0);

	newElement->key = strdup(key);
	if (newElement->key == NULL)
	{
		free(newElement);
		return (0);
	}

	newElement->value = strdup(value);
	if (newElement->value == NULL)
	{
		free(newElement->key);
		free(newElement);
		return (0);
	}

	newElement->next = ht->array[index];
	ht->array[index] = newElement;

	return (1);
}
