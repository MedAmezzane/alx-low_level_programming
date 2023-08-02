#include <main.h>
#include <stdio.h>
/**
 * _strpbrk - Entry point
 * @s: A pointer to the null-terminated string to be searched.
 * @accept: A pointer to the null-terminated string containing the
 * set of characters to be searched for.
 *
 * Description:
 * A custom implementation of the standard library function strpbrk,
 * which searches for the first occurrence of any character from a
 * specified set of characters in a null-terminated string.
 *
 * Return:
 * If a matching character is found in @s, the function returns a
 * pointer to the location of that character in @s.
 * If no matching character is found, the function returns NULL.
 *
 * Author: MedAMEZZANE
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}

	return (0);
}
