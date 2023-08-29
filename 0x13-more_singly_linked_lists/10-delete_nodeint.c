#include "lists.h"
/**
 * delete_nodeint_at_index - Delete a node at a specific index in a linked list
 * of integers.
 * @head: Pointer to the pointer of the head of the linked list.
 * @index: Index of the node to be deleted (0-based).
 * Return: 1 on success, -1 on failure.
 *
 * Description:
 * This function deletes the node at the specified index in the linked list of
 * integers. If the index is 0, the head node is deleted, and the head pointer
 * is updated to point to the next node. Otherwise, the function traverses the
 * list to find the node just before the deletion point. It then updates
 * pointers to bypass the node to be deleted and frees its memory. The function
 * returns 1 on successful deletion and -1 on failure (e.g., if the list is
 * empty or the index is out of range).
 *
 * Author: MedAMEZZANE
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL; /*Pointer to the node to be deleted*/
	unsigned int i = 0;

	if (*head == NULL)
		return (-1); /*Return -1 if list is empty*/

	/*Handle case when the node to be deleted is the head*/
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	/*Traverse the list to find the node just before the deletion point*/
	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1); /*Return -1 if index is out of range*/
		temp = temp->next;
		i++;
	}

	current = temp->next; /*Store the pointer to the node to be deleted*/
	temp->next = current->next; /*Bypass the node to be deleted*/
	free(current); /*Deallocate memory for the deleted node*/

	return (1); /*Return 1 to indicate successful deletion*/
}
