#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * strtow - Splits a string into an array of words.
 * @str: String to be splitted.
 *
 * This function takes a string as input and splits it into individual words
 * based on spaces. It allocates memory for an array of strings, where each
 * element of the array represents a word extracted from the input string.
 * The function ensures that the memory for the array and each word is
 * dynamically allocated.
 *
 * Return: A pointer to an array of strings if successful, otherwise NULL.
 */
char **strtow(char *str)
{
	char **array;
	int word_count = 0;
	int word_index = 0;
	int i, start, length;

	if (str == NULL || strlen(str) == 0)
		return (NULL);


	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			word_count++;
	}

	array = malloc((word_count + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0' && word_index < word_count; i++)
	{
		if (str[i] != ' ')
		{
			start = i;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
			length = i - start;
			array[word_index] = malloc((length + 1) * sizeof(char));
			if (array[word_index] == NULL)
				return (NULL);

			strncpy(array[word_index], str + start, length);
			array[word_index][length] = '\0';
			word_index++;
		}
	}

	array[word_index] = NULL;
	return (array);
}
