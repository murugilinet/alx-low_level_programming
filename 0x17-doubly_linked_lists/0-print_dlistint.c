#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - A function that prints a doubly linked list
 * @h: head of doubly linked list
 * Return: number of nodes in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
