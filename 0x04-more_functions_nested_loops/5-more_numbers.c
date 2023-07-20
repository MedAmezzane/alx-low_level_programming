#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Description:
 * Use the custom `_putchar` function to prints the numbers 0-14 ten times,
 * followed by a new line, 10 times.
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (i = 0; i < 15; i++)
		{
			/* print 2-digit number */
			if (i > 9)
				putchar('0' + (i / 10));
			putchar('0' + (i % 10));
		}
		_putchar('\n');
	}
}
