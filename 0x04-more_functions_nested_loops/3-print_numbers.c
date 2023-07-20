#include "main.h"

/**
 * print_numbers - Entry point
 *
 * Description:
 * Use the custom `_putchar` function to prints all
 * single digit numbers.
 *
 * Return: void.
 *
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
