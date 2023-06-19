#include "main.h"
/**
 * _isalpha- letter lower case or upper
 * @c: param returned
 * Return: if true 1 otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
