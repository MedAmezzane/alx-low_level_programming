#include "main.h"

/**
 * _puts - Entry point
 * @str: input integer
 *
 * Description:
 * Prints a string, followed by a new line.
 *
 * Return: no return.
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
