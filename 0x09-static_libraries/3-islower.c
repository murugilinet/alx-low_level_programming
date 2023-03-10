#include "main.h"
/**
 * _islower- checks for lower case
 * @c: param to be printed
 * Return: 1 if lowercase
 * 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 127)
		return (1);
	else
		return (0);
}
