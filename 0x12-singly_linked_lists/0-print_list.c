#include "lists.h"
#include <stdio.h>
/**
 * print_list - Prints the elements of a linked list.
 * @h: Pointer to the head of the linked list.
 * Return: The number of nodes in the list.
 *
 * Description: This function prints the elements of a linked list along with
 * their lengths. If an element's string is NULL, it prints "(nil)" instead.
 * The function returns the number of nodes in the linked list.
 */
size_t print_list(const list_t *h)
{
	size_t n = 0; /*Counter for the number of nodes*/

	while (h)
	{
		/*Check if the string element of the current node is NULL*/
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		n++;
		h = h->next; /*Move to the next node*/
	}

	return (n);
}
