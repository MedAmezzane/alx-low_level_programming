#include "main.h"

/**
 * _isupper - Entry point
 * @c: The character to be checked.
 *
 * Description:
 * Checks for uppercase characters.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 *
 */

int _isupper(int c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	else
		return (0);
}
