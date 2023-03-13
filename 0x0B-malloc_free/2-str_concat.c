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
	int len, i, j ;  /**i inc for s1 and s2
			  * j is increment for concatenated string
			  */
	if (s1 ==  NULL || s2 == NULL)
	{
		return ("");
	}

	len =  strlen(s1) + strlen(s2);

	arr = malloc((sizeof(char) * len) + 1);
	if (arr == NULL)
	{
		return (NULL);
	}
	j = 0;
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
