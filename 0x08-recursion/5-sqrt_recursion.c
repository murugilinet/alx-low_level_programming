#include "main.h"
int sqrt_(int a, int b);
/**
 * _sqrt_recursion(int n)-returns square root
 * @n: digit to get squareroot
 * Return:  squareroot
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_(1, n));
}
/**
 * sqrt_- returns squareroot
 * @a: number to square
 * @b: output after squaring a
 * Return: squareroot
 */
int sqrt_(int a, int b)
{
	if (a > b)
		return (-1);
	else if (a * a == b)
		return (a);
	return (sqrt_(a + 1, b));
}
