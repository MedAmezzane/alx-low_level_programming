#include "lists.h"
/**
 * pop_listint - Remove and return the first element of a linked list of
 * integers.
 * @head: Pointer to the pointer of the head of the linked list.
 * Return: Value of the removed element, or 0 if list is empty.
 *
 * Description:
 * This function removes the first element (node) of a linked list of integers.
 * If the list is empty or the head pointer is NULL, it returns 0. Otherwise,
 * it extracts the value of the first node, updates the head pointer to point
 * to the second node, frees the memory of the removed node, and returns the
 * value.
 *
 * Author: MedAMEZZANE
 */
int pop_listint(listint_t **head)
{
	listint_t *temp; /*Temporary pointer for node traversal*/
	int num;

	if (!head || !*head)
		return (0); /*Return 0 if list is empty or head is NULL*/

	num = (*head)->n; /*Extract the value of the first node*/
	temp = (*head)->next; /*Store the next node's address*/
	free(*head); /*Deallocate memory for the first node*/
	*head = temp; /*Update the head pointer to the next node*/

	return (num); /*Return the value of the removed element*/
}
