#include "main.h"

/**
 * reverse_array - Reverses  element of array of integers.
 * @a: The array to be  reserved.
 * @n: The number of elements.
 */

void reverse_array(int *a, int n)
{
	int temp;

	for (int i = n - 1; i >= n / 2; i--)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}
