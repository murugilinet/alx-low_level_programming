#include "main.h"
#include <stdio.h>
/**
 * _isupper - function that checks for uppercase
 * @c: parameter
 */
int _isupper(int c)
{
	int c;
	
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
