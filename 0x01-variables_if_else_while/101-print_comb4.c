#include<stdio.h>
/**
 * main-prints combos of three
 * Return: always 0
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a <= 7; a++)
	{
		for (b = 1; b <= 8; b++)
		{
			for (c = 2; c <= 9; c++)
			{
				if (a < b && b < c)
				{
					putchar(a % 10 + '0');
					putchar(b % 10 + '0');
					putchar(c % 10 + '0');
					if (a != 7 || b != 8 || c != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
