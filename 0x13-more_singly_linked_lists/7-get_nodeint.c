#include "lists.h"
/**
 * get_nodeint_at_index - Get the node at a specific index of a linked list of
 * integers.
 * @head: Pointer to the head of the linked list.
 * @index: Index of the node to retrieve (0-based).
 * Return: Pointer to the node at the given index, or NULL if index is out of
 * range.
 *
 * Description:
 * This function returns a pointer to the node at the specified index in the
 * linked list of integers. It starts at the head node and traverses the list
 * while keeping track of the current index. If the specified index is valid
 * and within the range of the list, the function returns a pointer to the node
 * at that index. If the index is out of range or the list is empty, the
 * function returns NULL.
 *
 * Author: MedAMEZZANE
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0; /*Counter for the current index*/
	listint_t *temp = head; /*Temporary pointer for node traversal*/

	/*Traverse the list while keeping track of the index*/
	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL); /*Return the node at index or NULL if not found*/
}
