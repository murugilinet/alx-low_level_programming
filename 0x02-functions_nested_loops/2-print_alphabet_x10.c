#include "main.h"
/**
 * print_alphabet_x10- alphabet ten times
 * Return: always 0;
 */
void print_alphabet_x10(void)
{
	int i;
	char lc;

	for (i = 0; i < 10; i++)
	{
		for (lc = 'a'; lc <= 'z'; lc++)
			_putchar(lc);
		_putchar('\n');
	}
}
