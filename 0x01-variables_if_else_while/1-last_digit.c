#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - last digit of random variable
 * Return:always 0
 */
int main(void)
{
	int n;
	int d;

	srand(time(0));
	n = rand() - RANDMAX / 2;
	d = n % 10;
	if (d > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, d);
}
	else if (d == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, d);

}
	else
{
	printf("Last digit of %d is less than 6 and not 0\n", n, d);
}
	return (0);
}