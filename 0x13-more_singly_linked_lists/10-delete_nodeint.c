#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index- deletes node at index
 * index of a linked list
 * @head: pointer to pointer of beginning
 * @index: index of node to be deleted
 * Return: i if success -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *initial;
	listint_t *next;
	unsigned int i;

	initial = *head;

	if (initial == NULL || (initial->next == NULL && index != 0))
		return (-1);
	if (index != 0)
	{
		for (i = 0; i < index - 1 && initial != NULL; i++)
		{
			initial = initial->next;

		}
	}
	next = initial->next;

	if (index != 0)
	{
		initial->next = next->next;
		free(next);
	}
	else
	{
		free(initial);
		*head = next;
	}
	return (1);
}
