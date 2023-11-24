#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings followed new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		const char *name = va_arg(args, char *);

		if (name == NULL)
			printf("(nil)");

		printf("%s", name);

		if (i < n - 1 && separator)
			printf("%s", separator);

	}

	printf("\n");

	va_end(args);

}


