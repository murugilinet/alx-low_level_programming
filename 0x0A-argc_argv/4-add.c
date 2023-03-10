#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main- adds positive numbers
 * @argc: argument count
 * @argv: argument values strings
 * Return: return 1 if error 0 if success
 */
int main(int argc, char **argv)
{
	int i, j;
	int sum = 0;

	while  (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		j = atoi(argv[argc]);
		sum += j;
	}
	printf("%d\n", sum);
	return (0);
}
