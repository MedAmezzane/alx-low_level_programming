#include "main.h"
/**
 * _islower - Entry point
 * @c: The character to check
 *
 * Description:
 * Checks if the character is a lowercase.
 *
 * Return: 1 if c is lowercase or 0 otherwise
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
