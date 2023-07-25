#include "main.h"

/**
 * swap_int - Entry point
 * @a: first integer.
 * @b: second integer.
 *
 * Description:
 * Swaps the values of two integers.
 *
 * Return: no return.
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
