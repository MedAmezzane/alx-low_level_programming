#include "lists.h"
/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: Pointer to the pointer of the head of the linked list.
 * @str: Pointer to the string to be stored in the new node.
 * Return: Address of the newly added node.
 *
 * Description: This function creates a new node and adds it to the beginning
 * of a linked list. The newly added node contains a copy of the provided
 * string and its length. The function updates the head pointer and returns
 * the address of the newly added node.
 *
 * Author: MedAMEZZANE
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	/*Calculate the length of the input string*/
	while (str[len])
		len++;
	/*Allocate memory for the new node*/
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	/*Allocate memory and copy the input string to the new node*/
	new->str = strdup(str);
	if (!new->str)
	{
		free(new); /*Clean up and return NULL on strdup failure*/
		return (NULL);
	}

	new->len = len; /*Set the length of the new node's string*/
	new->next = (*head); /*Update the new node's next pointer*/
	(*head) = new; /*Update the head pointer to the new node*/

	return (*head);
}
