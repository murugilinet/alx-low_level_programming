#include "main.h"
/**
 * get_bit- returns value of a bit at agiven index
 * @n: integer to be converted to binary
 * @index: index of bit
 * Return: value of the bit at index
 * or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)/*1 byte = 8bit*/
		return (-1);
	if ((n & (1 << index)) != 0)
		return (1);
	return (0);
}
