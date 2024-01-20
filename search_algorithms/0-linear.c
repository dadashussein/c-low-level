#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search - search for value in array of integers
 * @array: pointer the first element of array
 * @size: number elements of array
 * @value: value to search for
 *
 * Return: first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);

		i++;
	}

	return (-1);
}
