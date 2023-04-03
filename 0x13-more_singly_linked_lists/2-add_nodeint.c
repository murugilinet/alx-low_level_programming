#include "lists.h"
#include <stdlib.h>
/**
 * *add_nodeint- adds a new node at beginning of list
 * @head: pointer to pointer of fist node
 * @n: integer to be added
 * Return: address of new element
 * null if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
