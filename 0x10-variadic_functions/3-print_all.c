#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all- prints anything
 * @format: list of types of arguments passed
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int j, i = 0, c = 0;
	char *str;
	const char total_arg[] = "cifs";

	va_start(ap, format);
	while (format  && format[i])
	{
		j = 0;
		while (total_arg[j])
		{
			if (format[i] == total_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(ap, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(ap, double)), c = 1;
			break;
		case 's':
			str = va_arg(ap, char *), c = 1;
			if (str)
			{
				printf("%s", str);
				break;
			}
			printf("(nil)");
			break;
		} i++;
	}
	va_end(ap), printf("\n");
}
