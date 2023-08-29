#include "lists.h"
/**
 * free_listint - Free the memory of a linked list of integers.
 * @head: Pointer to the head of the linked list.
 *
 * Description:
 * This function iterates through a linked list of integers and deallocates
 * the memory occupied by each node. It starts by freeing the memory of the
 * current node and then moves to the next node. The head pointer is updated
 * to the next node, and the process continues until all nodes are freed.
 *
 * Author: MedAMEZZANE
 */
void free_listint(listint_t *head)
{
	listint_t *temp; /*Temporary pointer for node traversal*/

	while (head)
	{
		temp = head->next; /*Store the next node's address*/
		free(head); /*Deallocate memory for the current node*/
		head = temp; /*Move to the next node*/
	}
}
