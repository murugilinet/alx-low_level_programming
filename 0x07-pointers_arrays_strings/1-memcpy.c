#include "main.h"
/**
 * _memcpy- function that copies mem area
 * @src: source memory where is storedwwhere is copied
 * @dest: destination memory
 * @n: number of bytes
 * Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = o;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
