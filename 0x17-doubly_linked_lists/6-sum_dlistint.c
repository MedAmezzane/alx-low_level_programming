#include "lists.h"

/**
 * sum_dlistint - Sums the values of a doubly linked list.
 * @head: A pointer to the head of the doubly linked list.
 *
 * Return: The sum of the values in the list.
 */
int sum_dlistint(dlistint_t *head)
{
	int total_sum = 0;

	while (head != NULL)
	{
		total_sum += head->n;
		head = head->next;
	}

	return (total_sum);
}
