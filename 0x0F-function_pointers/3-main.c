#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * main - prints result of operation
 * @argc: argument count
 * @argv: pointer to parameters
 * Return: result as an integer
 */
int main(int argc, char *argv[])
{
	int res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
/*strcmp returns 0 if eual*/
	if (
	(strcmp(argv[2], "+") &&
	 strcmp(argv[2], "-") &&
	 strcmp(argv[2], "*") &&
	 strcmp(argv[2], "/") &&
	 strcmp(argv[2], "%"))
	)
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0)
	&& atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	res = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", res);

	return (0);
}
