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
	char conc[];
	int len, i;

	len =  strlen(s1) + strlen(s2);

	arr = malloc((sizeof(char) * len) + 1);
	if (arr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		conc = strcat(s1, s2);
		arr[i] = conc[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
