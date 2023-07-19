#include "main.h"
#include "1-alphabet.c"
/**
 * print_alphabet_x10 - Entry point
 *
 * Description:
 * Use the custom `print_alphabet` function to prints the alphabets in
 * lowercase, followed by a new line, 10 times.
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
	print_alphabet();
	}
}
