#include "lists.h"
/**
 * free_listint2 - Free the memory of a linked list of integers and set head to
 * NULL.
 * @head: Pointer to the pointer of the head of the linked list.
 *
 * Description:
 * This function iterates through a linked list of integers, deallocates the
 * memory occupied by each node, and sets the head pointer to NULL at the end.
 * It starts by freeing the memory of the current node and then moves to the
 * next node. The head pointer is updated to the next node, and the process
 * continues until all nodes are freed. Finally, the head pointer is set to
 * NULL to indicate an empty list.
 *
 * Author: MedAMEZZANE
 */
void free_listint2(listint_t **head)
{
	listint_t *temp; /*Temporary pointer for node traversal*/

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next; /*Store the next node's address*/
		free(*head); /*Deallocate memory for the current node*/
		*head = temp; /*Move to the next node*/
	}

	*head = NULL; /*Set the head pointer to NULL*/
}
