#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes a node at a given index in a doubly
 * linked list.
 * @head: A pointer to a pointer to the head of the doubly linked list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if successful, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;

		if (current->next != NULL)
			current->next->prev = NULL;

		free(current);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (current->next == NULL)
			return (-1);

		current = current->next;
	}

	current->prev->next = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);
	return (1);
}
