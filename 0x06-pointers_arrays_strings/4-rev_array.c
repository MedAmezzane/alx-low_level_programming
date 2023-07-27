#include "main.h"
/**
 * reverse_array - Entry point
 * @a: Array to be reversed.
 * @n: Number of elements in array @a.
 *
 * Description:
 * Reverses the contents of an array
 *
 * Return: No return.
 *
 * Author: MedAMEZZANE
 */
void reverse_array(int *a, int n)
{
	int i = 0, tmp;

	n = n - 1;
	while (i < n)
	{
		tmp = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = tmp;
		i++;
		n--;
	}
}
