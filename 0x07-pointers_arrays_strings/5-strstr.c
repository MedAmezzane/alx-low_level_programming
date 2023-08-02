#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: A pointer to the null-terminated string in which to
 * search for the substring needle.
 * @needle: A pointer to the null-terminated substring that needs to
 * be found in the haystack string.
 * Return:
 * If the needle substring is found in the haystack string, the
 * function returns a pointer to the location of the first character of
 * the substring in the haystack string.
 * If the needle substring is not found, the function returns NULL.
 *
 * Author: MedAMEZZANE
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
