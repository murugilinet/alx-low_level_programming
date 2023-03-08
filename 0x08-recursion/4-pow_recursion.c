#include "main.h"
/**
 * _pow_recursion- raises x to power y
 * @x: digit to be raised to power of y
 * @y: exponent or number of times x is being raised
 * Return: x raised to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
