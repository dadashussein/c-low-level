#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print multiplication result
 * @argc: number of arguments
 * @argv: arguments supplied
 * Return: always 1 if less than two arg var supplied otherwise 0.
 */
int main(int argc, char **argv)
{
	int mul = 0;

	if (argc > 2)
	{
		mul  = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
