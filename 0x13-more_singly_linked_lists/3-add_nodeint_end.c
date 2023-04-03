#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end- adds new node at the end
 * @head: pointer to pointer of first node
 * @n: int to be added
 * Return: address of new element
 * NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endnode;
	listint_t *get_last = *head;

	endnode = malloc(sizeof(listint_t));
	if (endnode == NULL)
		return (NULL);
	endnode->n = n;
	endnode->next = NULL;
	if (*head == NULL)
	{
		*head = endnode;
		return (*head);
	}
	while (get_last->next != NULL)
	{
		get_last = get_last->next;
	}
	get_last->next = endnode;
	return (*head);
}
