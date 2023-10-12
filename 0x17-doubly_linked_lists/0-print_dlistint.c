#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Print the elements of a doubly linked list.
 * @h: A pointer to the head of the doubly linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i; /*Variable to count the number of nodes.*/

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n); /*Print the value of the current node.*/
		h = h->next;  /*Move to the next node.*/
	}

	return i;  /*Return the total number of nodes printed.*/
}
