#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in a listint_t linked list
 * @head: pointer to the head of the linked list
 * Return: sum of all the data in the linked list, or 0 if it is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node;

	if (head == NULL)
	{
		return (0);
	}

	node = head;
	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
