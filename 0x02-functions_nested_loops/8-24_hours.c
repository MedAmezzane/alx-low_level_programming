#include "main.h"
/**
 * jack_bauer - Entry point
 *
 * Description:
 * Prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Return: void
 *
 */

void jack_bauer(void)
{
	int heur, minute;

	for (heur = 0; heur <= 23; heur++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar((heur / 10) + '0');
			_putchar((heur % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
