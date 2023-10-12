#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the node at a specific index in a doubly
 * linked list.
 * @head: A pointer to the head of the doubly linked list.
 * @index: The index of the node to retrieve.
 *
 * Return: A pointer to the node at the given index, or NULL if not found.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int current_index;

	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	for (current_index = 0; current_index < index; current_index++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
