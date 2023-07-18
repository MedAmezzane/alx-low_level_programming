#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Description:
 * Use the custom `_putchar` function to prints the alphabets in lowercase,
 * followed by a new line, 10 times.
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i, j;
	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(alpha[i]);
		}
	_putchar('\n');
	}
}
