#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add- sum of a and b
 * @a: first int
 * @b: second int
 * Return: sum
 */
int op_add(int a, int b)
{

	return (a + b);
}

/**
 * op_sub- difference of a and b
 * @a: first int
 * @b: second int
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul- product of a and b
 * @a: first int
 * @b: second int
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div- result of division
 * @a: first int
 * @b: second int
 * Return: division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod- remainder of dision
 * @a: first int
 * @b: second int
 * Return: remainder of division
 */
int op_mod(int a, int b)
{
	int m;
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	m = a % b;
	return (m);
}
