# include "main.h"
/**
 * _memset- fills memory with constant byte
 * @s: adress of memory to be filled
 * @b: constant byte
 * @n: bytes of memory area
 * Return: nothing
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
