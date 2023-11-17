#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - prints args
 * @ac: takes in width of grid
 * @av: height of grid
 * Return: the args one line at a time
 */

char *argstostr(int ac, char **av)
{
	int i;
	size_t current_pos = 0;
	char *result;
	size_t total_length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		total_length += strlen(av[i]) + 1;

	result = malloc(total_length + 1);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		{
		memcpy(result + current_pos, av[i], strlen(av[i]));
		current_pos += strlen(av[i]);
		result[current_pos] = '\n';
		current_pos++;
		}

	result[total_length] = '\0';
	return (result);
}

