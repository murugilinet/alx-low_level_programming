#include "main.h"
/**
 * print_last_digit- last digit of number
 * @num: parameter used
 * Return: returns r
 */
int print_last_digit(int num)
{
	int r;

	r = num % 10;
	if (num < 0)
		r = -(r);
	_putchar(r + '0');
	return (r);
}
