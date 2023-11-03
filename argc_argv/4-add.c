#include <stdio.h>
#include <stdlib.h>
/**
 * main - function to add variables
 * @argc: number of arguments
 * @argv: arguments being passed
 * Return: Always 0 or 1
 */
int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1 ; i < argc; i++)
		{
			char *endptr;
			long num = strtol(argv[i], &endptr, 10);

			if (*endptr == '\0' && num >= 0)
			{
				sum += (int)num;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
