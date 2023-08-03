#include "main.h"
/**
 * wildcmp - Compares two strings, considering wildcards represented by '*'.
 * @s1: The first string to compare.
 * @s2: The second string containing wildcards.
 *
 * Return: 1 if the strings are identical (considering wildcards), 0 otherwise.
 *
 * Author: MedAMEZZANE
 *
 */
int wildcmp(char *s1, char *s2)
{
	/*If both strings are empty they are identical, so return 1.*/
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/*If the first string is empty, and the second string has a '*' as*/
	/*the first character, we ignore the '*' and move to the next character*/
	/*in the second string to continue comparison.*/
	if (*s1 == '\0' && *s2 == '*' && *(s2 + 1) != '\0')
		return (0);

	/*If the current characters in both strings match, move to the next*/
	/*characters and continue comparison.*/
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

/*If the current character in the second string is a '*',we have two options:*/
/*	1. Ignore the '*' and continue comparison from the next character in the*/
/*	second string, keeping the same position in the first string.*/
/*	2. Move to the next character in the first string, keeping the same*/
/*	position in the second string.*/
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

/*If none of the above conditions are met, it means the current characters*/
/*in both strings don't match, and there is no wildcard to handle. Therefore,*/
/*the strings are not identical.*/
	return (0);
}
