#include "main.h"
/**
 * more_numbers- prints 0 to 14 ten time
 * Return: nothing
 */
void more_numbers(void)
{
	int i = 0;
	int num = 0;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num <= 14; num++)
			if (num > 9)
				_putchar((num / 10) + '0')
				_putchar((num % 10) + '0');
	}
	_putchar('\n');
}
