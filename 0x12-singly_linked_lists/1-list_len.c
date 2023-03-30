#include "lists.h"
#include <stddef.h>
/**
 * list_len- number of elements in a linked list
 * @h: pointer to node
 * Return: @elem_count number of elements in a list
 */
size_t list_len(const list_t *h)
{
	int  elem_count = 0;
	const list_t *current;

	current = h;

	while (current != NULL)
	{
		elem_count++;
		current = current->next;
	}
	return (elem_count);
}
