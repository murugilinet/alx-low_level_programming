#include "main.h"
/**
 * _strstr - function that locates  asubstring
 * @haystack: string input
 * @needle: substring input
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	while (*haystack != '\0')
	{
	h = haystack;
	n = needle;

	while (*haystack != '\0' && *n != '\0' && *haystack == *n)
	{
		haystack++;
		n++;
	}
	if (!*n)
		return (h);
	haystack = h + 1;
	}
	return (0);
}
