#include "main.h"
#include <stdlib.h>
/**
 * _calloc- allocates memory for an array
 * @nmemb:  blocks of elements
 * @size: size of bits needed per block
 * Return: pointer to alocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array_mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array_mem = malloc(size * nmemb);

	if (array_mem == NULL)
		return (NULL);
	for (i = 0; i <= size * nmemb; i++)
	{
		array_mem[i] = 0;/*similar to *(array_mem + i)*/
	}
	return (array_mem);
}
