#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *str_concat- concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: null on failure and pointer of new memory
 * on success
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int len = 0, i, j = 0 ;  /**i inc for s1 and s2
			  * j is increment for concatenated string
			  */
	if (s1 ==  NULL)
	{
		return ("");
	}
	if (s2 == NULL)
	{
		return ("");
	}

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	arr = malloc((sizeof(char) * len));
	if (arr == NULL)
	{
		return (NULL);
	}
	while (j < len)
	{
		for (i = 0; s1[i]; i++)
		{
			arr[j++] = s1[i];
		}
		for (i = 0; s2[i]; i++)
		{
			arr[j++] = s2[i];
		}
	j++;
	}
	return (arr);
}
