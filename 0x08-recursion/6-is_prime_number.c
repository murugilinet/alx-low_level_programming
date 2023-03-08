#include "main.h"
int prime_number(int a, int b);
/**
 * is_prime_number(int n)- returns 1 if prime
 * 0 otherwise
 * @n: input number
 * Return: 1 if prime 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (1);
	return (prime_number(2, n));
}
/**
 * prime_number- prints 1 if input is prime
 * 0 otherwise
 * @a: divisor of b
 * @b: check if prime
 * Return: 1 if prime
 * 0 otherwise
 */
int prime_number(int a, int b)
{
	while (a < b)
	{
		if (b % a == 0)
			return (0);
		else
			return (1);
		return (prime_number(a + 1, b));
	}
}
