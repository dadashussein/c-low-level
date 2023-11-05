#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * checker - helper function for is_palindrome
 * @str: the string
 * @len: length of string
 * @count: counter of recursion
 * Return: 1 if string is a palindrome, 0 if it is not.
 */
int checker(char *str, int len, int count)
{
	if (count >= len)
		return (1);
	if (str[len] == str[count])
		return (checker(str, len - 1, count + 1));
	return (0);
}
/**
 * is_palindrome - checks if the string is a palindrome
 * @s: the string to check
 * Return: 1 if string is a palindrome, 0 if it is not.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);
	int count = 0;

	return (checker(s, len - 1, count));
}
