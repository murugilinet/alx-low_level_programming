#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_strdup- returns pointer to a newly allocated space in memory
 * which contains copy of string given as parameter
 * @str: parameter string
 * Return: Null is string is null and poiner to new string if success
 */
char *_strdup(char *str)
{
	char *arr;
	int len;
	int i;

	len = strlen(str);
	arr = malloc((sizeof(char) * len) + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		arr[i] = str[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
