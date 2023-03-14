#include "main.h"
#include <stdlib.h>
/**
 * *argstostr- concatenates all arguments of program
 * @ac:  argument count
 * @av: pointer to argument values strings
 * Return: null if failure and pointer to a new string if success
 */
char *argstostr(int ac, char **av)
{
	int i;
	char **arr;

	if (ac == 0 || av == NULL)
		return (NULL);

	arr = (char **)malloc(sizeof(char *) * ac);

	if (arr != NULL)
	{
		for (i = 0; i < ac; i++)
		{
			arr[i] = (char *)malloc(sizeof(char) * (ac + 1));
			if (arr[i] != NULL)
			{
				arr[i] = av[i];
				_putchar('\n');
			}
			else
			{
				while (i >= 0)
				{
					free(arr[i]);
					i--;
				}
				free(arr);
				return (NULL);
			}
		}
		return (arr);
	}
	else
	{
		return (NULL);
	}
	return (0);
}
