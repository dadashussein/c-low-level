#include <stdio.h>
/**
 * before_main - prints a string before main function is executed.
 *
 * Return: void
 */
void __attribute__((constructor)) before_main()
{
	char *s;

	s = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";
	printf("%s", s);
}

