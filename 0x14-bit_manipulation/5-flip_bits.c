#include "main.h"
/**
 * flip_bits- returns number of bits needed
 * to flip to get from one number to another
 * @n: first number
 * @m:second number
 * Return: number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int base = 1, opp;
	unsigned int i, count = 0;

	opp = n ^ m;

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (base == (base & opp))
			count += 1;
		base <<= 1;
	}
	return (count);
}
