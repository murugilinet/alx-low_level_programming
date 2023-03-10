#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main- prints its name
 * @argc: count of arguments
 * @argv: array of pointers to argument strings
 * Return: always 0
 */
int main(int argc, char *argv[])
	{
		while (argc--)
			printf("%s\n", *argv++);
		return (0);
	}
