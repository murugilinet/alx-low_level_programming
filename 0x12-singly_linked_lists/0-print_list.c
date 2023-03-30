#include "lists.h"
#include <stdio.h>
/**
 * print_list- prints all elements
 * @h: pointer to element of string
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t elem_count;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s", h->len, h->str);
		}
	elem_count++;
	h = h->next;
	}
	return (elem_count);
}
