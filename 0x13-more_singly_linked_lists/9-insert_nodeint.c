#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer to the head of the linked list
 * @idx: index of the list where the new node should be added
 * @n: data to be stored in the new node
 * Return: address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *node;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if
		(new_node == NULL)
		{
			return (NULL);
		}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	node = *head;
	for (i = 0; i < idx - 1 && node != NULL; i++)
		node = node->next;

	if (node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = node->next;
	node->next = new_node;

	return (new_node);
}
