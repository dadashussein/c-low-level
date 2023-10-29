#include "main.h"
/**
 * _memset - fills n byte of memory
 *
 * @s: pointer to start of memory area
 * @b: constant byte to fill with
 * @n: num bytes to fill n
 *
 * Return: pointer to beginning of memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*ptr = b;
		ptr++;
		n--;
	}
	return (s);

}
