#include "main.h"
/**
 * _strlen - Calculates the length of a string.
 * @s: The string to check.
 *
 * Return: The integer length of the string.
 */
int _strlen(char *s)
{
	return (*s ? 1 + _strlen(s + 1) : 0);
}

/**
 * do_is_palindrome - Recursively checks if a string is a palindrome.
 * @s: The string to check.
 * @l: The length of the string.
 * @i: The string iterator.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int do_is_palindrome(char *s, int l, int i)
{
	/*If the iterator i has reached or passed the middle point of the string,*/
	/*all characters have been compared, and the string is a palindrome.*/
	if (i >= l / 2)
		return (1);

	/*Check if the characters at both ends of the string match.*/
	if (*(s + i) == *(s + l - i - 1))
		return (do_is_palindrome(s, l, i + 1));

	/*If the characters do not match, the string is not a palindrome.*/
	return (0);
}

/**
 * is_palindrome - Determines if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	/*Calculate the length of the string using the _strlen function.*/
	int l = _strlen(s);
	/*Call the helper function do_is_palindrome with the arguments s, l,*/
	/*and 0 as the initial iterator. The result returned by do_is_palindrome*/
	/*is then returned as the final result of is_palindrome.*/
	return (do_is_palindrome(s, l, 0));
}
