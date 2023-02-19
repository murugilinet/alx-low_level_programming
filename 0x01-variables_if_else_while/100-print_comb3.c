#include<stdio.h>
/**
 * main-  prints all possible different combinations of three digits.
 * Return: always 0
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 8; a++)
		{
		for (b = 1; b <= 9; b++)
		{
			if (a < b)
			{
				putchar(a % 10 + '0');
				putchar(b % 10 + '0');

			}
			if (a != 8 && b != 9)
			{
				putchar(' , ');
				putchar(' ');
			}
		}
		}
	return (0);
}
