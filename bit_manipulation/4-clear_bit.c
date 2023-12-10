#include "main.h"
/**
 * clear_bit - set bit
 * @n: pointer
 * @index: position to change bit
 *
 * Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8))
		return (-1);

	*n &= ~(1 << index);
	return (1);

}
