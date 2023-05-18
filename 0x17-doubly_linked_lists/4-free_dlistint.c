#include "lists.h"

/**
 * free_dlistint - function that free a dlistint list
 * @head: type pointer dlistint node
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
