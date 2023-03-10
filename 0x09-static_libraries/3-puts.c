# include "main.h"
/**
 * _puts(char *str)- prints string
 * @str: string to be printed
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
