#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: type dpointer of next and prev node
 * @index: type unisgned int index of node
 * Return: 1 if success or -1 if node NULL
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	count = 0;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}


	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	if (current == NULL)
		return (-1);

	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);

	return (1);
}
