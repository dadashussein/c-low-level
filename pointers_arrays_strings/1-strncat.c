#include "main.h"

/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
		dest_ptr++;

	while (n > 0 && *src != '\0')
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		n--;

	*dest_ptr = '\0';
	return (dest);
}
