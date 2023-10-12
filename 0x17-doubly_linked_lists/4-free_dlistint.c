#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a doubly linked list.
 * @head: A pointer to the head of the doubly linked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next_node;

	while (head != NULL)
	{
		next_node = head->next;  /*Store the next node temporarily.*/
		free(head);              /*Free the current node.*/
		head = next_node;        /*Move to the next node.*/
	}
}
