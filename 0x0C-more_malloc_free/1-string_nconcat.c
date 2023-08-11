#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings, using at most n bytes from the
 *					second string.
 * @s1: The first input string.
 * @s2: The second input string.
 * @n: The maximum number of bytes to concatenate from s2.
 *
 * Return: A pointer to the newly allocated concatenated string, or NULL if
 *			memory allocation fails.
 *
 * Author: MedAMEZZANE
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, index;
	char *result;

	/* Calculate length of s1 */
	if (s1 == NULL)
		len1 = 0;
	else
	{
		for (len1 = 0; s1[len1]; len1++)
			;
	}
	/* Calculate length of s2 */
	if (s2 == NULL)
		len2 = 0;
	else
	{
		for (len2 = 0; s2[len2]; len2++)
			;
	}
	/* Adjust length of s2 if exceeding n */
	if (len2 > n)
		len2 = n;
	/* Allocate memory for concatenated string */
	result = malloc(sizeof(char) * (len1 + len2 + 1));
	if (result == NULL)
		return (NULL);
	/* Copy characters from s1 */
	for (index = 0; index < len1; index++)
		result[index] = s1[index];
	/* Concatenate characters from s2 up to n */
	for (index = 0; index < len2; index++)
		result[index + len1] = s2[index];
	result[len1 + len2] = '\0';
	return (result);
}
