#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to the head of the list.
 * @n: integer to add to the list.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->prev = NULL;
	temp->next = *head;
	if (*head != NULL)
		(*head)->prev = temp;
	*head = temp;

	return (temp);
}
