#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *create_array- creates an array of chars
 * @size: size of array
 * @c: initialised character
 * Return: Null if size is 0 or fails
 * pointer to array on success
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
