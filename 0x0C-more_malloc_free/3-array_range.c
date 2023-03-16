#include "main.h"
#include<stdlib.h>
/**
 * array_range- creates an array of integers
 * @min: parameter
 * @max: parameter
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *_range;
	int i, j = min, count = 0;

	if (min > min)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		count++;
	}
	_range = malloc(count * sizeof(int));
	if (_range == NULL)
		return (NULL);
	while (i <= count)
	{
		_range[i++] = j++;
	}
	return (_range);
}
