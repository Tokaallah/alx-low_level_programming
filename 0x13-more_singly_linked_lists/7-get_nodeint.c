#include "lists.h"
/**
 * get_nodeint_at_index - get the node in the index position of the linked list
 * @head: pointer to linked list
 * @index: position it starts at 0
 * Return: a node of the linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	node = head;
	for (i = 0; node != NULL && i < index; i++)
		node = node->next;

	if
		(node == NULL || i != index)
	{
		return (NULL);
	}

	return (node);
}
