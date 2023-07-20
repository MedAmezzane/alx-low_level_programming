#include "main.h"

/**
 * print_square - Entry point
 * @size: The size of the square.
 *
 * Description:
 * Prints a square using the character #,
 * followed by a new line
 *
 * Return: void.
 *
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
