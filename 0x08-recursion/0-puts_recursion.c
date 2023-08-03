#include "main.h"
/**
 * _puts_recursion - Entry point
 * @s: A pointer to a character array (string) as an argument.
 *
 * Description:
 * A recursive implementation of the puts function,
 * which is used to print a null-terminated string to the standard
 * output followed by a newline.
 *
 * Return: No return.
 *
 * Author: MedAMEZZANE
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
