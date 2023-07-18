#include "main.h"
/**
 * _abs - Entry point
 * @n: The number to check
 *
 * Description:
 * Computes and return the absolute value of an integer.
 *
 * Return: The absolute value of @n
 *
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
