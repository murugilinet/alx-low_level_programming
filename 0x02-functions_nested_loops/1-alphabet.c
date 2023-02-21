#include "main.h"
/**
 * print_alphabet - print alph in lower case
 * Return: always 0
 */
void print_alphabet(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
		_putchar(lc);
	_putchar('\n');
}

