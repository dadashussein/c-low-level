#include <stdio.h>
#include "main.h"
/**
 * get_bit -  value given index
 * @n: number
 * @index: index
 *
 * Return: value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
