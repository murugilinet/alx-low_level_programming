#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index- inserts a node at a
 * given position
 * @head: pointer to pointer of the first element
 * @idx: index where node is to be added
 * @n: data to be added at the idx index
 * Return: adress of new node
 * NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *initial;
	unsigned int i;

	initial = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && initial != NULL; i++)
		{
			initial = initial->next;
		}
	}
	if (initial == NULL && idx != 0)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	newnode->next = initial->next;
	initial->next = newnode;
	return (newnode);
}
