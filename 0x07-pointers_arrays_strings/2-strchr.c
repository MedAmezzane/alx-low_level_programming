#include "main.h"
#include <stdio.h>
/**
 * _strchr - Entry point
 * @s: A pointer to the null-terminated string in which to search
 * for the character @c.
 * @c: The character to be searched in the string.
 *
 * Description:
 * A ustom implementation of the standard library function strchr,
 * which is used to search for the first occurrence of a specific character
 * in a null-terminated string.
 *
 * Return:
 * If the character is found, it returns a pointer to that location in the
 * string.
 * If the character is not found or if the input string is an empty string it
 * returns NULL.
 *
 * Author: MedAMEZZANE
 */
char *_strchr(char *s, char c)
{
	const unsigned char target = (unsigned char)c;

	while (*s)
	{
		if (*s == target)
		{
			return ((char *)s);
		}
		s++;
	}

	return (NULL);
}
