#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: The number to get the last digit of
 *
 * Description:
 * Prints the last digit of a number.
 *
 * Return: The value of the last digit @n
 *
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}

	_putchar('0' + last_digit);

	return (last_digit);
}
