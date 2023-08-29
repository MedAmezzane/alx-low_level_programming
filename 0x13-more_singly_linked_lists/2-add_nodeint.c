#include "lists.h"
/**
 * add_nodeint - Add a new node at the beginning of a linked list of integers.
 * @head: Pointer to the pointer of the head of the linked list.
 * @n: Integer value to be stored in the new node.
 * Return: Pointer to the newly added node, or NULL on failure.
 *
 * Description:
 * This function creates a new node with the provided integer value and adds it
 * at the beginning of the linked list. It allocates memory for the new node
 * using malloc. If memory allocation fails, it returns NULL. Otherwise, it
 * initializes the new node's values and updates the head pointer to point to
 * the newly added node. Finally, it returns a pointer to the newly added node.
 *
 * Author: MedAMEZZANE
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new; /*Pointer to the newly created node*/

	/*Allocate memory for the new node*/
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL); /*Return NULL on memory allocation failure*/

	new->n = n; /*Set the integer value of the new node*/
	new->next = *head; /*Update the new node's next pointer*/

	*head = new; /*Update the head pointer to the new node*/

	return (new); /*Return the pointer to the newly added node*/
}
