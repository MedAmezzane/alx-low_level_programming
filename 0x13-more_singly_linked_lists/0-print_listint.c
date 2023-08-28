#include "lists.h"
/**
 * print_listint - Print the elements of a linked list of integers.
 * @h: Pointer to the head of the linked list.
 * Return: The number of nodes in the list.
 *
 * Description:
 * This function takes a pointer to the head of a linked list of integers
 * and prints the elements of the list. It iterates through the linked list,
 * printing the integer value of each node using the printf function. The
 * function returns the total number of nodes in the linked list.
 *
 * Author: MedAMEZZANE
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0; /*Counter for the number of nodes*/

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num); /*Return the total number of nodes*/
}
