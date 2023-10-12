#include "lists.h"

/**
 * dlistint_len - Count the number of nodes in a doubly linked list.
 * @h: A pointer to the head of the doubly linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t i;  /*Variable to count the number of nodes.*/

    for (i = 0; h != NULL; i++)
        h = h->next;  /*Move to the next node.*/

    return (i);  /*Return the total number of nodes counted.*/
}
