#include "lists.h"
/**
 * get_nodeint_at_index- returns nth node of linked list
 * @head: pointer to pointer of beginning of list
 * @index: index of node
 * starting from 0
 * Return: nth node
 * null if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
