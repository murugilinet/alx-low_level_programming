#include "lists.h"
#include<stdio.h>
/**
 * print_listint- prints all elements of a list
 * @h: pointer to head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int node_count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
	node_count++;
	h = h->next;
	}
	return (node_count);
}
