#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *array_range - make  memory for an array
 * @min: int type
 * @max: int type
 * Return:  return pointer to array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int size;
	int i;

	size = max - min + 1;

	if (min > max)
		return (NULL);

	ptr = malloc(size * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = min + i;

	return (ptr);

}
