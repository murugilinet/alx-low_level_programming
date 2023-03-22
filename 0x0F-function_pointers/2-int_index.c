#include "function_pointers.h"
/**
 * int_index- function that searches for an integer
 * @array: parameter array
 * @size: number of elements in array
 * @cmp: pointer to function
 * Return: index of the first element for which
 * the cmp function does not return 0
 * -1 if no element matches or size<=0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, rtn;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			rtn = cmp(array[i]);
			if (rtn != 0)
			{
				return (i);
			}
		}
		return (-1);
	}
}
