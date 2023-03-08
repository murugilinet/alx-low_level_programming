# include "main.h"
/**
 * _puts_recursion(char *s)- prints string followed by new line
 * @s: string input
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
