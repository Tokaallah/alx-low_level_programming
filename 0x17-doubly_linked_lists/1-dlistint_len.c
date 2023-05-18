#include "lists.h"

/**
 * print_dlist_len - print number elements of a dlistint.
 * @h: type dlistint point of prev and next node
 * Return: count.
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
