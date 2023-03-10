#include "main.h"
#include <string.h>
/**
 * _strncpy - copy n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	for (; x < n; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}
