#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a list and set head to NULL
 * @head: point to pointer to head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	*head = NULL;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
