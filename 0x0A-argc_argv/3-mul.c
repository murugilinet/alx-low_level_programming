#include "main.h"
#include <stdio.h>
#include<stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: count of arguments
 * @argv: argument values strings
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int prod = 1;
	int i;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			prod = prod * atoi(argv[i]);
		}
		printf("%d\n", prod);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
