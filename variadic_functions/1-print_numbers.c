#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints given number
 * @separator: the string to be printed between numbers
 * @n:the number of integers
 *
 * Return: prints number followed new line.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (separator)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
			printf("%d%s", va_arg(args, int), separator);

		printf("%d", va_arg(args, int));
		va_end(args);

	}

	printf("\n");

}
