#include "main.h"
#include <string.h>
/**
 * _strcat - function that concatenates two strings.
 * @dest: input parameter
 * @src: input parameter
 * Return: a pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;

	while (*(dest + index) != '\0')
	{
		index++;
	}
	while (dest_len >= 0)
	{
		*(dest + index) = *(src + dest_len);
		if (*(src + dest_len) == '\0')
			break;
		index++;
		dest_len++;
	}

	return (dest);
}
