#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - deletes the node at index index of a
 * dlistint_t linked list.
 * @head: pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *iter = *head;
	dlistint_t *tmp = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}

	while (iter != NULL)
	{
		if (i == index)
		{
			tmp = iter;
			iter->prev->next = iter->next;
			if (iter->next != NULL)
				iter->next->prev = iter->prev;
			free(tmp);
			return (1);
		}
		i++;
		iter = iter->next;
	}
	return (-1);
}
