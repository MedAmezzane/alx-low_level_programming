#include "main.h"
/**
 * infinite_add - Entry point
 * @n1: The first number to add.
 * @n2: The second number to add.
 * @r: The buffer to store the result in.
 * @size_r: The size of the buffer.
 *
 * Description:
 * function that add two numeric strings.
 * (Handle adding arbitrarily large numbers represented as strings)
 *
 * Return:
 * A pointer to the result array @r,
 * or 0 to indicate an overflow.
 *
 * Author: MedAMEZZANE
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l, m, n;
	/*Calculate the length of the first numeric string (n1)*/
	for (i = 0; n1[i]; i++)
		;

	/*Calculate the length of the second numeric string (n2)*/
	for (j = 0; n2[j]; j++)
		;
/*Check if either of the input strings is too large for the result array*/
	if (i > size_r || j > size_r)
		return (0);
	m = 0;
	for (i -= 1, j -= 1, k = 0; k < size_r - 1; i--, j--, k++)
	{
		n = m;
		if (i >= 0)
			n += n1[i] - '0';
		if (j >= 0)
			n += n2[j] - '0';
		/*If both input strings are exhausted and the carry is0, break*/
		if (i < 0 && j < 0 && n == 0)
		{
			break;
		}
		m = n / 10;
		r[k] = n % 10 + '0';
	}
	/*Add null terminator to the result array*/
	r[k] = '\0';
	/*Check for overflow*/
	if (i >= 0 || j >= 0 || m)
		return (0);
/*Reverse the order of characters in the result to get the correct order*/
	for (k -= 1, l = 0; l < k; k--, l++)
	{
		m = r[k];
		r[k] = r[l];
		r[l] = m;
	}
	return (r);
}
