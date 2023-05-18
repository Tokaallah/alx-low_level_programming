#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of a dlistint list
 * @head: type pointer dlistint node
 * @index: type unsigned int index position of the node
 * Return: return head
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		count++;
		current = current->next;
	}

	return (NULL);
}
