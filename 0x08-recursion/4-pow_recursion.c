#include "main.h"
/**
 * _pow_recursion - Entry point
 * @x: base number
 * @y: exponent
 *
 * Description:
 * A recursive implementation to calculate the power of a
 * number @x raised to the exponent @y.
 *
 * Return: An integer representing the result of the power operation (x^y).
 * or -1 if y < 0.
 *
 * Author: MedAMEZZANE
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	return (1);
}
