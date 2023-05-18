#include "lists.h"

/**
 * sum_dlistint - return the nth node of a dlistint list
 * @head: type pointer dlistint node
 * Return: Return the sum of nodes
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
