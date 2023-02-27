# include "main.h"
/**
 * swap_int(int *a, int *b)- swaps two integers
 * @a: int to swap
 * @b: int to swap
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
