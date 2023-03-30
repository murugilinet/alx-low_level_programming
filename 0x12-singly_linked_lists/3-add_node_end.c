#include <string.h>
#include "lists.h"
/**
 * add_node_end- adds node at the end
 * @head: pointer to pointer of node
 * @str: string element of node
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *endnode;
	list_t *last;

	if (!head)
		return (0);
	last = *head;/*last takes value of head*/
	endnode = malloc(sizeof(list_t));
	if (endnode == NULL)
		return (NULL);
	endnode->str = strdup(str);
	endnode->len = strlen(str);
	endnode->next = NULL;/*next of the last node should be null always*/
	if (*head == NULL) /*FIRST CASE*/
	{
		*head = endnode;
		return (*head);
	}
	while (last->next)/*iterates until next is NULL*/
		last = last->next;
	last->next = endnode;/*mext is already null*/
	return (*head);
}
