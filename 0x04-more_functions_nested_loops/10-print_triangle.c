#include "main.h"

/**
 * print_triangle - Entry point
 * @size: The size of the triangle.
 *
 * Description:
 * Prints a triangle using the character #,
 * followed by a new line
 *
 * Return: void.
 *
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
				_putchar(' ');

			for (j = 0; j < i; j++)
				_putchar('#');

			if (i == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
