#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 *  _strdup - Entry point
 * @str: string we need to duplicate
 *
 * Return: a pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
	char *dest;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	dest = malloc(strlen(str) + 1);
	for (i = 0; i < strlen(str); i++)
		dest[i] = str[i];

	return (dest);
}
