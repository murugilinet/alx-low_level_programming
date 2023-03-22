#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name- prints name
 * @name: parameter to be printed
 * @f: function pointer that prints
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
