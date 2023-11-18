#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * is_digit - checks if a string is a digit
 * @c: string to check
 * Return: 1 if true, 0 if false
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	printf("Error\n");
	return (0);
}
/**
 * add_arrays - adds two arrays
 * @mul_result: array 1
 * @sum_result: array 2
 * @elementres: size of arrays
 * Return: void
 */
void add_arrays(int *mul_result, int *sum_result, int elementres)
{
	int i = 0, elementres2 = elementres - 1, carry = 0, sum;

	while (i < elementres)
	{
		sum = carry + mul_result[elementres2] + sum_result[elementres2];
		sum_result[elementres2] = sum % 10;
		carry = sum / 10;
		i++;
		elementres2--;
	}
}
/**
 * multiply - multiplies two numbers
 * @num1: number 1
 * @element1: size of number 1
 * @num2: number 2
 * @element2: size of number 2
 * @elres: size of result
 * Return: pointer to result
 */
int *multiply(char *num1, int element1, char *num2, int element2, int elres)
{
	int i = 0, i1 = element1 - 1;
	int i2, product, carry, digit, *mul_result, *sum_result;

	sum_result = calloc(sizeof(int), (elres));
	while (i < element1)
	{
		mul_result = calloc(sizeof(int), (elres));
		i2 = element2 - 1, digit = (elres - 1 - i);
		if (!is_digit(num1[i1]))
			return (NULL);
		carry = 0;
		while (i2 >= 0)
		{
			if (!is_digit(num2[i2]))
				return (NULL);

			product = (num1[i1] - '0') * (num2[i2] - '0') + carry;
			carry = product / 10;
			mul_result[digit] = (product % 10);
			i2--, digit--;
		}
		add_arrays(mul_result, sum_result, elres);
		free(mul_result);

		i++, i1--;
	}
	return (sum_result);
}
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 if success, 98 if failure
 */
int main(int argc, char *argv[])
{
	int element1, element2, i, elementres, temp, *sum_result;
	char *num1, *num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	element1 = strlen(argv[1]), element2 = strlen(argv[2]);
	elementres = element1 + element2;

	if (element1 < element2)
		num1 = argv[1], num2 = argv[2];
	else
	{
		num1 = argv[2], num2 = argv[1];
		temp = element1, element1 = element2, element2 = temp;
	}
	sum_result = multiply(num1, element1, num2, element2, elementres);
	if (!sum_result)
		exit(98);

	while (sum_result[i] == 0 && i < elementres)
		i++;
	if (i == elementres)
		printf("0\n");
	else
	{
		while (i < elementres)
		printf("%d", sum_result[i++]);
		printf("\n");
	}

	return (0);
}
