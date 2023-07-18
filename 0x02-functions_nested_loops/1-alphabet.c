#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Description:
 * Use the custom `_putchar` function to prints the alphabets in lowercase,
 * followed by a new line
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(alpha[i]);
	}
	_putchar('\n');
}
