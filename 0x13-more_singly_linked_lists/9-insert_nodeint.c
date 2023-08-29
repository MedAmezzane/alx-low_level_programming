#include "lists.h"
/**
 * insert_nodeint_at_index - Insert a new node at a specific index in a linked
 * list of integers.
 * @head: Pointer to the pointer of the head of the linked list.
 * @idx: Index at which the new node should be inserted (0-based).
 * @n: Value to be assigned to the new node.
 * Return: Pointer to the inserted node, or NULL on failure.
 *
 * Description:
 * This function inserts a new node with the given value at the specified index
 * in the linked list of integers. If the specified index is 0, the new node
 * becomes the new head. If the index is greater than the current size of the
 * list, the new node is appended to the end of the list. Otherwise, the
 * function traverses the list until reaching the node just before the
 * insertion point. It then updates pointers to insert the new node and returns
 * a pointer to the inserted node. If memory allocation fails or the head
 * pointer is NULL, the function returns NULL.
 *
 * Author: MedAMEZZANE
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new; /*New node to be inserted*/
	listint_t *temp = *head; /*Temporary pointer for node traversal*/

	new = malloc(sizeof(listint_t));
	/*Check for memory allocation failure or NULL head pointer*/
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	/*Handle case when the new node needs to be inserted at the beginning*/
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	/*Traverse the list until the insertion point or end of list is reached*/
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1) /*Found the node before the insertion point*/
		{
			new->next = temp->next; /*Link new node to the next node*/
			temp->next = new; /*Link previous node to the new node*/
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
