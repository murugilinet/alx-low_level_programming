#include <stdio.h>
/**
 * main - prints alphabet in lowercase and tgen upper
 * Return:always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch)
}
	for (ch = 'A'; ch <= 'Z'; ch++)
{
	putchar(ch)
}
	putchar('\n')
	return (0);
}
