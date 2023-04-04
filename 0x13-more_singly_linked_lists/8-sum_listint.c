#include "lists.h"
/**
 * sum_listint- returns sum of all the data n of list
 * @head: pointer to first element
 * Return: sum of all data n
 * 0 if empty
 */
int sum_listint(listint_t *head)
{
	int data_count = 0;
	if (head ==  NULL)
		return (0);
	while (head)
	{
		data_count += head->n;
		head = head->next;
	}
	return (data_count);
}
