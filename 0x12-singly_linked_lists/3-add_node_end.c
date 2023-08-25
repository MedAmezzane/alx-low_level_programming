#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @str: The string to be stored in the new node.
 * Return: A pointer to the newly added node, or NULL on failure.
 *
 * Description: This function creates a new node and adds it to the beginning
 * of a linked list. The new node is populated with a copy of the provided
 * string and its length. The function updates the head pointer and returns
 * a pointer to the newly added node. Returns NULL on memory allocation failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int str_len = 0;

	while (str[str_len])
		str_len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = str_len;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
