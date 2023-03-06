#include "main.h"
#include <stdio.h>
/**
 * print_diagsums- prints sum of the two diagonals af a
 * square matrix of integers
 * @a: the matrix
 * @size: size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int x, sum1 = 0, sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum1 += a[(size + 1) * b];
		sum2 += a[(size - 1) * (b + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
