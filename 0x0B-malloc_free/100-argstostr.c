#include "main.h"
#include <stdlib.h>
/**
 * *argstostr- concatenates all arguments of program
 * @ac:  argument count
 * @av: pointer to a string of pointers of argument values strings
 * Return: null if failure and pointer to a new string if success
 */
char *argstostr(int ac, char **av)
{
	int i;
	char **arr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	len++;


	arr = malloc(sizeof(char) * len);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	else
	{
		k = 0;
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j] != '\0'; j++, k++)
			{
				arr[k] = av[i][j];
			}
			arr[k] = '\n';
			k++;
		}
	}
	return (arr);
}
