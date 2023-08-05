#include "main.h"
/**
 * _strspn - Entry point
 * @s: A pointer to the null-terminated string to be checked.
 * @accept: A pointer to the null-terminated string containing the set of
 * characters to be matched.
 *
 * Description:
 * A ustom implementation of the standard library function strspn,
 * which calculates the length of the initial segment of a string
 * that consists entirely of characters from another specified string.
 *
 * Return: The length of the initial segment of the @s string that consists
 * entirely of characters from the @accept string.
 *
 * Author: MedAMEZZANE
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k, matche;

	k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		matche = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				matche = 1;
			}
		}
		if (matche == 0)
		{
			return (k);
		}
	}

	return (0);
}
