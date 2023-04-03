#include "lists.h"

/**
 * print_listint - prints all the list elements of the listint_t list
 * @h: pointer to the head of the list
 * Return: the name of the node
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}

	return (count);
}
