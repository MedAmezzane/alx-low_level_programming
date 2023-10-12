#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given index in a doubly
 * linked list.
 * @h: A pointer to a pointer to the head of the doubly linked list.
 * @idx: The index at which the new node should be inserted.
 * @n: The value for the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current, *next_node;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	if (idx != 0)
	{
		current = *h;
		for (i = 0; i < idx - 1 && current != NULL; i++)
			current = current->next;

		if (current == NULL)
			return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		next_node = *h;
		*h = new_node;
		new_node->prev = NULL;
	}
	else
	{
		new_node->prev = current;
		next_node = current->next;
		current->next = new_node;
	}

	new_node->next = next_node;

	if (new_node->next != NULL)
		new_node->next->prev = new_node;

	return (new_node);
}
