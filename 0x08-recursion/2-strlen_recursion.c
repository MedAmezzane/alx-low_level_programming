#include "main.h"
/**
 * _strlen_recursion - Entry point
 * @s: String that the function calculates its length using recursion.
 *
 * Description:
 * A recursive implementation of the strlen function,
 * which is used to calculate the length of a null-terminated string.
 *
 * Return: An integer that represents the length of the string .
 *
 * Author: MedAMEZZANE
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
