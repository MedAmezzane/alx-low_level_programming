#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings into a new string.
 * @s1: The first input string.
 * @s2: The second input string.
 *
 * Return: A pointer to the newly allocated concatenated string, or
 *         NULL if memory allocation fails.
 *
 * Author: MedAMEZZANE
 */
char *str_concat(char *s1, char *s2)
{
	char *result_str;
	int i, result_index = 0;
	int total_length = 0;

	/* If s1 is NULL, treat it as an empty string */
	if (s1 == NULL)
		s1 = "";
	/* If s2 is NULL, treat it as an empty string */
	if (s2 == NULL)
		s2 = "";
	/* Calculate the total length of the concatenated string */
	for (i = 0; s1[i] || s2[i]; i++)
		total_length++;

	result_str = malloc(sizeof(char) * total_length);

	/* Return NULL if memory allocation fails */
	if (result_str == NULL)
		return (NULL);
	/* Copy characters from s1 to the concatenated string */
	for (i = 0; s1[i]; i++)
		result_str[result_index++] = s1[i];
	/* Copy characters from s2 to the concatenated string */
	for (i = 0; s2[i]; i++)
		result_str[result_index++] = s2[i];
	/* Add null-terminator at the end of the concatenated string */
	result_str[result_index] = '\0';
	/* Return the pointer to the concatenated string */
	return (result_str);
}
