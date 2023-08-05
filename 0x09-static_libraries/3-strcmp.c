#include "main.h"
/**
 * _strcmp - Entry point
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Description:
 * Compares two strings @s1 and @s2.
 *
 * Return: Negative, positive or zero integer.
 *
 * Author: MedAMEZZANE
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
