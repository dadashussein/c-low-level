#include "main.h"
/**
 * factorial - Calculate the factorial of a number recursively.
 * @n: The number for which the factorial is calculated.
 *
 * Return: The factorial of the number, or -1 if the number is negative.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));

}
