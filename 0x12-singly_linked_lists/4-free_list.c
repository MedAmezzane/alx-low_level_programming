#include "lists.h"
/**
 * free_list - Frees a linked list and its strings.
 * @head: A pointer to the head of the linked list to be freed.
 *
 * Description: This function iterates through a linked list, freeing each node
 * along with the strings stored in them. It takes a pointer to the head of the
 * linked list as input and updates the head to NULL after freeing all nodes.
 *
 * Author: MedAMEZZANE
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;     /* Store the next node before freeing */
		free(head->str);       /* Free the string in the current node */
		free(head);            /* Free the current node */
		head = temp;           /* Move to the next node */
	}
}
