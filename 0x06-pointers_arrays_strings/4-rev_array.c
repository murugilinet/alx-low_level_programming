#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: input integer
 * @n: number of elements of the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
		int i, j, sw;

		j = n - 1;

		for (i = 0; i < n / 2; i++)
		{
			sw = a[i];
			a[i] = a[j];
			a[j--] = sw;
		}
}
