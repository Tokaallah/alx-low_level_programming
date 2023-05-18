#include "lists.h"

/**
 * print_dlistint - print all elements of a dlistint.
 * @h: type dlistint point of prev and next node
 * Return: n_nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}

	return (count);
}
