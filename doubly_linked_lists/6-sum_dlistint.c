#include "lists.h"
#include <stdio.h>
/**
 * sum_dlistint - returns the sum of all the data of a dlistint_t linked list.
 * @head: pointer to the head of the list
 *
 * Return: sum of all the data (n) of a dlistint_t linked list or 0 if it fails
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *iter = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (iter != NULL)
	{
		sum += iter->n;
		iter = iter->next;
	}

	return (sum);
}
