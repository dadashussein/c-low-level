#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to the head of the list.
 *
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
		return;

	while (head->prev)
		head = head->prev;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
