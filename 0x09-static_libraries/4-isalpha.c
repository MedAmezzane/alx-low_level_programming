#include "main.h"
/**
 * _isalpha - Entry point
 * @c: The character to check
 *
 * Description:
 * Checks if the character is an alphabetic.
 *
 * Return:
 * 1 if @c is a letter (lowercase or uppercase).
 * 0 otherwise.
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
