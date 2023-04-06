#include "main.h"
#include <string.h>
/**
 * binary_to_uint- converts vinary to unsigned int
 * @b: pointer to a astring
 * of 0 and 1
 * Return: converted number
 * or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len;
	unsigned int num = 0, base = 1;

	len = strlen(b);
	if (b == NULL)
		return (0);
	while (len)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);

		if (b[len - 1] == '1')
			num += base;
		base *= 2;
		len--;
	}
	return (num);
}
