#include "main.h"

/**
 * print_diagonal - Entry point
 * @n: The number of \ characters to be printed
 *
 * Description:
 * Draws a diagonal line using the character '\' of lenth n,
 * followed by a new line
 *
 * Return: void.
 *
 */

void print_diagonal(int n)
{
	int i, space;

	for (i = 0; i < n; i++)
	{
		/* print i spaces */
		for (space = 0; space < i; space++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		}
	if (n <= 0)
	{
	_putchar('\n');
	}
}
