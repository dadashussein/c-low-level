#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *iter = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		if (*h == NULL)
		{
			new_node->next = NULL;
			new_node->prev = NULL;
			*h = new_node;
			return (new_node);
		}
		new_node->next = *h;
		new_node->prev = NULL;
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (iter != NULL)
	{
		if (i == idx - 1)
		{
			new_node->next = iter->next;
			new_node->prev = iter;
			if (iter->next != NULL)
				iter->next->prev = new_node;
			iter->next = new_node;
			return (new_node);
		}
		i++;
		iter = iter->next;
	}
	free(new_node);
	return (NULL);
}
