#include "lists.h"
#include<stdio.h>
/**
 * listint_len- returns number of elements in a list
 * @h: pointer to head
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	int elem_count = 0;

	while (h != NULL)
	{
		elem_count++;
		h = h->next;
	}
	return (elem_count);
}
