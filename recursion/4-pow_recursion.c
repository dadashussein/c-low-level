#include "main.h"

/**
 * _pow_recursion -  returns the value of x raised to the power of y.
 * @x: num
 * @y: power
 * Return: power of x or -1 if powers is below zero
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y > 0)
	{
		y = y - 1;
		return (x * _pow_recursion(x, y));
	}
	return (-1);
}
