#include <stdio.h>

/* Using constructors in C */
void before_main(void) __attribute__((constructor));
/**
 * main_constructor - A constructor function that prints a message
 * before main runs
 * Return: Nothing
 */
void before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
