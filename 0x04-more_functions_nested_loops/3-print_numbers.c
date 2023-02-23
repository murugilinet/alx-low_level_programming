#include "main.h"
/**
 * print_numbers- prints from 0 to 9
 * Return: nothing since it is void
 */
void print_numbers(void)
{
	int i = 0;

	for (i =  0; i <= 9; i++)
		_putchar((i % 10) + '0');
	_putchar('\n');
}
