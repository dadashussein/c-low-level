#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - print anything
 * @format: variable
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i++])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char*);

				if (!str)
					str = "(nil)";

				printf("%s", str);
				break;
			default:
				continue;
		}

		if (format[i])
			printf(", ");

	}

	printf("\n");
	va_end(args);

}
