#include "main.h"
#include <string.h>
/**
 * _strncat - function that concatenates two strings.
 * @dest: input parameter
 * @src: input parameter
 * @n: bytes
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[index] != '\0' && index < n)
	{
		dest[dest_len] = src[index];
		index++;
		dest_len++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
