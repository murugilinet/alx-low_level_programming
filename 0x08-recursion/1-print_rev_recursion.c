#include "main.h"
/**
 * _print_rev_recursion(char *s)- prints string in reverse
 * @s: input string
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
