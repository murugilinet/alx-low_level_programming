#include "main.h"
#include <stdlib.h>
/**
 * strtow- function that splits a string into words
 * @str: string to be split
 * Return: pointer to an array of strings(words)
 */
char **strtow(char *str)
{
	char **arr;
	int words = 0, i, j, k, l, m, len;

	if ((str == NULL) || (str == ""))
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)/*gets number of words*/
	{
		if (str[i] != ' ' && (str[i + 1] != ' '))
			words++;
		words++;
	}
	arr = (char **)malloc(sizeof(char *) * (words + 1));

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; str[i] != '\0' && k < words; i++)
	{
		if (str[i] != ' ')
		{
			len = 0;
			for (j = i; str[j] != ' ' && str[j] != '\0'; j++)
				len++;/* gets the length of the string*/
			arr[k] = malloc(sizeof(char) * (len + 1));
			if (arr[k] == NULL)
			{
				for (m = 0; m < k ; m++)
				{
					free(arr[k]);
				}
				free(arr);
				return (NULL);
			}
			for (l = 0; l < len; l++, i++)
				arr[k][l] = str[i];
			arr[k][l] = '\0', k++;
		}
	}
	arr[k] = NULL;
	return (arr);
}


