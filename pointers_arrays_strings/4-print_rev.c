#include "main.h"

/**
 * print_rev - function with 1 argument
 * @s: 1st argument char type
 *
 * Description: function that prints a string in reverse
 * Return: na
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (i = i - 1; i >= 0; i--)
		_putchar([i]);

	_putchar('\n');
}
