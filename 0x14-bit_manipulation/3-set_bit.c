#include "main.h"
/**
 * set_bit- sets the value of a bit
 * to 1 at a given index
 * @n: pointer to bits of an integer
 * @index: index of bit
 * Return: i if success
 * -1 if failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int *) * 8)
		return (-1);
	if ((*n & (1 << index)) == 0)
		*n = *n | (1 << index);
	return (1);
}
