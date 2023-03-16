#include "main.h"
/**
 * malloc_checked- allocates memory using malloc
 * @b: parameter to be allocated memory
 * Return: pointer to allocated memory and
 * status value of 98 if fails
 */
void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);

	if (x == NULL)
		exit(98);
	return (x);
}

