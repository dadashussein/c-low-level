#include "main.h"
/**
 * _strlen_recursion - Calculate the length of a string recursively.
 * @s: Pointer to the string.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
