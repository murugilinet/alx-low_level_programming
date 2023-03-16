#include "main.h"
#include <stdlib.h>
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
	int len2, i, lens = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len2 = strlen(s2);
	while (len2 <= n)
	{
		for (i = 0; s1[i] || s2[i]; i++)
			lens++;
	}
	conc_string = malloc((lens + 1) * sizeof(char));

	if (x == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		conc_string[j++] = s1[i];
	for (i = 0; s2[i]; i++)
		conc_string[j++] = s2[i];
	conc_string[j] = '\0';
	return (conc_string);
}
