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

	if (separator)
	{
		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			const char *current_string = va_arg(args, char *);

			if (!current_string)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s%s", current_string, separator);
			}
		}

	}

	va_end(args);
	printf("\n");

}


