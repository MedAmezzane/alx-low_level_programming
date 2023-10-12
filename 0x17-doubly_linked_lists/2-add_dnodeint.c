#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Add a new node at the beginning of a doubly linked list.
 * @head: A pointer to the head of the doubly linked list.
 * @n: The value to be stored in the new node.
 *
 * Return: A pointer to the newly added node, or NULL if it fails.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	/*Allocate memory for the new node.*/
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;        /*Set the value in the new node.*/
	new_node->prev = NULL;  /*The previous pointer of the new node is NULL.*/
	/*The next pointer of the new node points to the current head.*/
	new_node->next = *head;

	*head = new_node;/*Update the head to point to the new node as the new head.*/

	if (new_node->next != NULL)
		/*Update the previous node's next pointer to point to the new node.*/
		(new_node->next)->prev = new_node;

	return (new_node);  /*Return a pointer to the newly added node.*/
}
