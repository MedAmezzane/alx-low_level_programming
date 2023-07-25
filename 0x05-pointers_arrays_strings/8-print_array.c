#include <stdio.h>
#include "main.h"

/**
 * print_array - Entry point
 * @a: input the array of integers.
 * @n: input the number of elements to be printed.
 *
 * Description:
 * Prints @n elements of an array of integers.
 *
 * Return: no return.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
