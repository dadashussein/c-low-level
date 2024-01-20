#include <math.h>
#include <stdio.h>
#include "search_algos.h"
/**
 * jump_search - search for value in array of integers
 * @array: pointer the first element of array
 * @size: number elements of array
 * @value: value to search for
 *
 * Return: first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, j = 0, m = 0, step = sqrt(size);

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		if (array[i] >= value)
			break;
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i += step;
	}

	j = i - step;
	printf("Value found between indexes [%lu] and [%lu]\n", j, i);
	for (m = j; m <= i; m++)
	{
		if (m >= size)
			break;
		printf("Value checked array[%lu] = [%d]\n", m, array[m]);
		if (array[m] == value)
			return (m);
	}

	return (-1);
}