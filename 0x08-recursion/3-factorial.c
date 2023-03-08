#include "main.h"
/**
 * factorial(int n)- factorial of a number
 * @n: number input
 * Return: always 0;
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
