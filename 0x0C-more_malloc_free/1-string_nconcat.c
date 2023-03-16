#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat- concatenates two strings
 * @s1: first string
 * @s2: string 2
 * @n: bytes of s2
 * Return: null if fail
 * pointer to new memory if pass
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	void *conc_string;
	int l2, l1, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = strlen(s1);
	l2 = strlen(s2);

	if (n <= l2)
		l2 = n;
	conc_string = malloc((l1 + l2 + 1) * sizeof(char));
	if (conc_string == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		conc_string[i];
	for (; i < (l1 + l2 + 1); i++)
		conc_string[i];
	conc_string[i] = '\0';
	return (conc_string);
}
