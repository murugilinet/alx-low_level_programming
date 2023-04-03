#include "lists.h"
#include <stdlib.h>
/**
 * free_listint- frees alist
 * @head: pointer to beginning of list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
