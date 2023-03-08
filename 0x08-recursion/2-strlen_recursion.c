#include "main.h"
/**
 * _strlen_recursion(char *s)- prints length of string
 * @s: string input
 * Return: always 0
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count = count + _strlen_recursion(s + 1);
	}
	return (count);
}
