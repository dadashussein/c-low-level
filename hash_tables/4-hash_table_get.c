#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key:the key you are looking for
 *
 * Return:the value associated with the elemen
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *current;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL && strcmp(current->key, key) != 0)
		current = current->next;
	return ((current == NULL) ? NULL : current->value);
}
