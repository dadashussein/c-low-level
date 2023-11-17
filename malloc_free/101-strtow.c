#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * countWords - function to calculate number of words
 * @str: string being passed to check for words
 *
 * Return: number of words
 */
int countWords(char *str)
{
	int count;
	int num;

	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			num = 0;
		} else if (!num)
		{
			num = 1;
			count++;
		}
		str++;
	}

	return (count);
}

char *copyWord(char *str)
{
	int len = 0;
	char *word;

	while (*str && *str != ' ' && *str != '\t' && *str != '\n')
	{
		len++;
		str++;
	}

	word = (char *)malloc((len + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);

	strncpy(word, str - len, len);
	word[len] = '\0';

	return (word);

}

char **strtow(char *str)
{
	int numWords = countWords(str);
	int wordIndex = 0;
	int i;
	char *word;
	char **wordArray;

	wordArray = (char **)malloc((numWords + 1) * sizeof(char *));
	if (wordArray == NULL)
		return (NULL);

	if (str == NULL || *str == '\0')
		return (NULL);

	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			str++;
		} else {
			word =  copyWord(str);
			if (word == NULL)
			{
				for (i = 0; i < wordIndex; i++)
				{	
					free(wordArray[i]);
				}

				free(wordArray);
				return (NULL);

            		}
		}
		wordArray[wordIndex] = word;
		wordIndex++;

		while (*str && *str != ' ' && *str != '\t' && *str != '\n')
			str++;
	}
	wordArray[wordIndex] = NULL;

	return (wordArray);
}
