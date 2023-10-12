#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Add a new node at the end of a doubly linked list.
 * @head: A pointer to the head of the doubly linked list.
 * @n: The value to be stored in the new node.
 *
 * Return: A pointer to the newly added node, or NULL if it fails.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

	if (head == NULL)
		return (NULL);

	/*Allocate memory for the new node.*/
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;       /*Set the value in the new node.*/
	new_node->next = NULL; /*The next pointer of the new node is initially NULL.*/

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;

	/*Update the next pointer of the last node to point to the new node.*/
	current->next = new_node;
	/*Update the previous pointer of the new node to point to the last node.*/
	new_node->prev = current;

	return (new_node);  /*Return a pointer to the newly added node.*/
}
