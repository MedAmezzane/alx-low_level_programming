#include "lists.h"
/**
 * sum_listint - Calculate the sum of all integers in a linked list.
 * @head: Pointer to the head of the linked list.
 * Return: Sum of all integers in the list.
 *
 * Description:
 * This function calculates the sum of all integer values stored in the nodes of
 * a linked list. It starts at the head node and iterates through the list while
 * adding the integer value of each node to the running sum. The final sum is
 * returned as the result.
 *
 * Author: MedAMEZZANE
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head; /*Temporary pointer for node traversal*/

	/*Iterate through the list and accumulate the sum*/
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
