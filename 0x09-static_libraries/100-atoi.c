#include "main.h"

/**
 * _atoi - Entry point
 * @s: The string to be converted.
 *
 * Description:
 * Converts a string to an integer,
 * similar to the atio() function.
 *
 * Return: The integer value of the converted string.
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	/* Handle empty string */
	if (*(s) == '\0')
		return (0);
	do {
		/* Handle signs */
		if (*s == '-')
			sign *= -1;
		/* Handle numbers */
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;

	} while (*s++);

	return (num * sign);
}
