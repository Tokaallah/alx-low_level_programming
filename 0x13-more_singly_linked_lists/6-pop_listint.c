#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * @head: pointer to the head node of the list
 * Return: zero or the data (n) of the head node
*/

int pop_listint(listint_t **head)
{
	listint_t *old_head;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	old_head = *head;
	n = old_head->n;
	*head = (*head)->next;
	free(old_head);

	return (n);
}
