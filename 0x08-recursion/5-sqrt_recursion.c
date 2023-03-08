#include "main.h"
int sqrt(int a, int b);
/**
 * _sqrt_recursion(int n)-returns square root
 * @n: digit to get squareroot
 * Return:  squareroot
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt(1, n));
}
/**
 * sqrt- returns squareroot
 * @a: number to square
 * @b: output after squaring a
 * Return: squareroot
 */
int sqrt(int a, int b)
{
	if (a > b)
		return (-1);
	else if (a * a == b)
		return (a);
	return (sqrt(a + 1, b));
}
