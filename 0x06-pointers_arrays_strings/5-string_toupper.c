#include "main.h"
/**
 * string_toupper - Entry point
 * @s: string to change.
 *
 * Description:
 * Converts all lowercase characters in a string to uppercase.
 *
 * Return: Pointer to string.
 *
 * Author: MedAMEZZANE
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}
