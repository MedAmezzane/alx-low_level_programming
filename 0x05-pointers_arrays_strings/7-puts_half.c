#include "main.h"

/**
 * puts_half - Entry point
 * @str: input string
 *
 * Description:
 * Prints half a string.
 *
 * Return: no return.
 */

void puts_half(char *str)
{
	int index = 0, length = 0, mid;

	while (str[index++])
		length++;

	if ((length % 2) == 0)
		mid = length / 2;

	else
		mid = (length + 1) / 2;

	for (index = mid; index < length; index++)
		_putchar(str[index]);

	_putchar('\n');
}
