#include "main.h"

/**
 * print_number - Entry point
 * @n: Integer to print.
 *
 * Description:
 * Prints an integer using only the custom function '_putchar'.
 *
 * Return: void.
 *
 */

void print_number(int n)
{
	unsigned int nat_num = n;

	if (n < 0)
	{
		_putchar('-');
		nat_num = -nat_num;
	}
	if ((nat_num / 10) != 0)
		print_number(nat_num / 10);

	_putchar((nat_num % 10) + '0');
}
