#include "main.h"
/**
 * _print_rev_recursion - print reversed string followed by a new line
 * @s: pointer to the string
 */
void void _print_rev_recursion(char *s)
{
        if (*s == '\0')
        {
                _putchar('\n');
                return;
        }
        _puts_recursion(s + 1);
        _putchar(*s);
}
