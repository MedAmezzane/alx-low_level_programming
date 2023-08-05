#include "main.h"
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
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (accept[j] != '\0')
		{
			return (&s[i]);
		}
	}
	return (0);
}
