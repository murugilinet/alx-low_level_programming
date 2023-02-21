#include "main.h"
/**
 * print_sign- sign of number
 * @n: parameter returned
 * Return: 1 if greater than 0
 * 0 if zero
 * -1 if less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar('.');
		_putchar(' ');
	return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
}
