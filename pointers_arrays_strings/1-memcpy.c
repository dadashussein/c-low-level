#include "main.h"
/**
 * _memcpy  - copies @n bytes from memory
 * @dest: pointer to the destination memory area where the data will be copied
 * @src: a pointer to the source memory area from which data will be copied
 * @n:  specifying the number of bytes to copy from  source
 *
 * Return: A pointer to the destination buffer @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;

	}

	return (dest);

}
