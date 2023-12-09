#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the head of the list
 * @index: index of the node to return
 *
 * Return: pointer to the node at index or NULL if it fails
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	dlistint_t *iter;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	iter = head;
	for (i = 0; i < index; i++)
		iter = iter->next;
	iter->prev = NULL;

	return (iter);
}
