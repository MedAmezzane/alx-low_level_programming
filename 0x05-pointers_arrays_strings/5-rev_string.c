#include "main.h"

/**
 * rev_string - Entry point
 * @s: input string
 *
 * Description:
 * Reverses a string.
 *
 * Return: no return.
 */

void rev_string(char *s)
{
	int length = 0, index = 0;
	char tmp;

	while (s[index++])
		length++;

	for (index = length - 1; index >= length / 2; index--)
	{
		tmp = s[index];
		s[index] = s[length - index - 1];
		s[length - index - 1] = tmp;
	}
}
