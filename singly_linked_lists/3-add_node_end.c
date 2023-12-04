#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to the head of the list
 * @str: string to be added to the list
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add = malloc(sizeof(list_t));
	list_t *last = *head;

	if (add == NULL)
		return (NULL);

	add->str = strdup(str);
	add->len = strlen(str);
	add->next = NULL;

	if (*head == NULL)
	{
		*head = add;
		return (add);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = add;
	return (add);
}
