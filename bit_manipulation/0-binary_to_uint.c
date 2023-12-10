#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: pointer
 *
 * Return: result
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (!b)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		result = (result << 1) | (*b == '1' ? 1 : 0);
		b++;
	}

	return (result);
}
