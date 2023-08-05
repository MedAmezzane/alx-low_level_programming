#include "main.h"
/**
 * _isdigit - Entry point
 * @c: The character to be checked.
 *
 * Description:
 * Checks for a digit (0 through 9).
 *
 * Return: 1 if character is digit, 0 otherwise.
 *
 * Author: MedAMEZZANE
 */
int _isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}
