#include "lists.h"
/**
 * add_nodeint_end - Add a new node at the end of a linked list of integers.
 * @head: Pointer to the pointer of the head of the linked list.
 * @n: Integer value to be stored in the new node.
 * Return: Pointer to the newly added node, or NULL on failure.
 *
 * Description:
 * This function creates a new node with the provided integer value and adds it
 * at the end of the linked list. It allocates memory for the new node using
 * malloc. If memory allocation fails it returns NULL. Otherwise it initializes
 * the new node's values, traverses to the last node in the list, and updates
 * the next pointer of the last node to point to the newly added node. Finally,
 * it returns a pointer to the newly added node.
 *
 * Author: MedAMEZZANE
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new; /*Pointer to the newly created node*/
	listint_t *temp = *head; /*Temporary pointer for traversing the list*/

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new; /*If list is empty, make new node the head*/
		return (new);
	}

	/*Traverse to the last node and update its next pointer*/
	while (temp->next)
		temp = temp->next;

	temp->next = new; /*Update the next pointer of the last node*/

	return (new); /*Return the pointer to the newly added node*/
}
