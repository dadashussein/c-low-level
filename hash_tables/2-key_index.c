#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * key_index  - find index given key
 * @key: hash key
 * @size: size array of the hash yable
 *
 * Return: key value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);


	return (index % size);
}
