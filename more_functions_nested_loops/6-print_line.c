#include "main.h"

/**
  * print_line - prints a line of n stars
  * @n: number of stars
  *
  * Return: void
  */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar(10);
	else
		for (i = 0; i < n; i++)
			_putchar(95);
	_putchar(10);
}
