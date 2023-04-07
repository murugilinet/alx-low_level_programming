#include "main.h"
/**
 * clear_bit- sets value of a bit to 0 at a
 * given index
 * @n: pointer to bits ogf integer
 * @index: index of bit
 * Return: 1 if success
 * -1 if failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned int *) * 8)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
