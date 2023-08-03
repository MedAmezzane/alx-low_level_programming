#include "main.h"
/**
 * _print_rev_recursion - Entry point
 * @s: String to print in reverse order using recursion.
 *
 * Description:
 * A a recursive implementation of a function that prints a
 * string in reverse order.
 *
 * Return: No return.
 *
 * Author: MedAMEZZANE
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
