#include "lists.h"
#include <string.h>
/**
 * add_node- adds a new node at the beginning of list
 * @head: pointer to pointer of the node
 * @str: string to be added
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	if (!head)
		return (0);
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
