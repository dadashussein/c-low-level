#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * hash_table_create - creat new hash table
 * @size: size of array
 *
 * Return: new hash_table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);

	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	return (new_table);
}

