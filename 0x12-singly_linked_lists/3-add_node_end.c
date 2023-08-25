#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @str: The string to be stored in the new node.
 * Return: A pointer to the newly added node, or NULL on failure.
 *
 * Description: This function creates a new node and adds it to the end of a
 * linked list. The new node is populated with a copy of the provided string
 * and its length. The function updates the head pointer if necessary and
 * returns a pointer to the newly added node. Returns NULL on memory allocation
 * failure.
 *
 * Author: MedAMEZZANE
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp = *head;
	unsigned int str_len = 0;

	/*Calculate the length of the input string*/
	while (str[str_len])
		str_len++;
	/*Allocate memory for the new node*/
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		/* Return NULL on memory allocation failure*/
		return (NULL);
	/*Allocate memory and copy the input string to the new node*/
	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = str_len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		/*If list is empty, make new node the head*/
		*head = new_node;
		return (new_node);
	}
	/*Traverse to the last node and update its next pointer*/
	while (temp->next)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
