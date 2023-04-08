#include "main.h"
/**
 * get_endianness- checks the endianness
 * Return: 0 if big endian
 * 1 if little endian
 */
int get_endianness(void)
{
	int x = 1;
	char *chr;

	chr = (char *)&x;
	if (*chr == 0)
		return (0);
	return (1);
}
