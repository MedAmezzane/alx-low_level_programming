#include "lists.h"
/**
 * listint_len - Calculate the number of elements in a linked list of integers.
 * @h: Pointer to the head of the linked list.
 * Return: The number of elements in the list.
 *
 * Description:
 * This function takes a pointer to the head of a linked list of integers and
 * calculates the number of elements (nodes) in the list. It iterates through
 * the linked list while incrementing the counter for each node encountered.
 * The function returns the total number of elements in the linked list.
 *
 * Author: MedAMEZZANE
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0; /*Counter for the number of elements*/

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num); /*Return the total number of elements*/
}
