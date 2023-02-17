#include <stdio.h>
/**
 * main-prints all numbers of base 16 in loswercase
 * Return:always 0
 */
int main(void)
{
	int num;
	int lc;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (lc = 'a'; lc <= 'f'; lc++)
		putchar(lc);

	putchar('\n');
	return (0);
}

