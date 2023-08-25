#include "lists.h"
/**
 * list_len - Counts the number of elements in a linked list.
 * @h: Pointer to the head of the linked list.
 * Return: The number of elements in the linked list.
 *
 * Description: This function traverses a linked list and counts the number of
 * elements in it. It takes the head of the linked list as a parameter and
 * returns the total number of elements present in the list.
 *
 * Author: MedAMEZZANE
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	/*Iterate through the linked list*/
	while (h)
	{
		elements++;
		h = h->next; /*Move to the next node*/
	}

	return (elements);
}
