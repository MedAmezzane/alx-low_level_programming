#include "main.h"
/**
 * factorial - Entry point
 * @n: Integer that the function calculates its factorial
 * using recursion.
 *
 * Description:
 * A recursive implementation to calculate the factorial of
 * a non-negative integer @n.
 *
 * Return: An integer that represent the factorial of @n.
 *
 * Author: MedAMEZZANE
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
