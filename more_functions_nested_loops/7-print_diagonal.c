#include "main.h"
/**
  * print_diagonal - prints a diagonal line
  * @n: number of times to print the character
  *
  * Return: void
  */

void print_diagonal(int n)
{
	int spaces, i;

	if (n <= 0)
		_putchar('\n');
	else
		for (i = 0; i < n; i++)
			for (spaces = 0; spaces < n; spaces++)
				if (spaces == i)
					_putchar(92);
				else if (spaces < i)
					_putchar(' ');
}
