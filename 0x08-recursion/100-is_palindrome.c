#include "main.h"
#include <stdio.h>
#include <string.h>
int pali_ndrome(int i, char *p);
/**
 * is_palindrome(char *s)- function that returns 1 if palindrome 0 if not
 * @s: string
 * Return: 1 if palindrome 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (pali_ndrome(0, s));
}
/**
 * pali_ndrome- returns 1 if true and 0 if not
 * @i: index of characters in string
 * @p: string
 * Return: 1 if true and 0 otherwise
 */
int pali_ndrome(int i, char *p)
{
	int length = strlen(p);
	int middle = length / 2;

	if (i < middle)
	{
		if (p[i] != p[length])
			return (0);
		else if (p[i] == p[length])
			return (1);
		return (pali_ndrome(i + 1, p));
	}
	return (0);
}
