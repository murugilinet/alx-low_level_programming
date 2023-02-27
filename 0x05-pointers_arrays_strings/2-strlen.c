# include "main.h"
/**
 *  _strlen(char *s)- returns length of string
 * @s: string
 * Return: always 0
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
