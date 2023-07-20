#include "main.h"

/**
 * print_line - Entry point
 * @n: The number of _ characters to be printed
 *
 * Description:
 * Draws a straight line using the character '_' of lenth n,
 * followed by a new line
 *
 * Return: void.
 *
 */

void print_line(int n)
{
	int i;

	for (i = n; i > 0; i--)
		_putchar('_');

	_putchar('\n');
}
