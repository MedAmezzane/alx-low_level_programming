#include "main.h"
/**
 * sqrt - needs the extra parameter r to work
 * @n: The number whose square root is to be found.
 * @r: The root iterator.
 *
 * Return: The natural square root of @n
 * If the square of @r is greater than @n, returns -1.
 */
int sqrt(int n, int r)
{
	if (r * r == n)
		return (r);
	else if (r * r > n)
		return (-1);
	return (sqrt(n, r + 1));
}

/**
 * _sqrt_recursion - The main function that calculates the
 * natural square root of the given non-negative integer n.
 * @n: The number whose square root is to be found.
 *
 * Return: The natural square root of @n, or -1 if the square
 * root is undefined (negative numbers)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt(n, 0));
}
