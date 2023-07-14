#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the alphabet without q and e.
 *
 * Description: Use `putchar` to print all letters but the letter 'q' and 'e'.
 *
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
		putchar(letter);
		}
	}
	putchar('\n');

	return (0);
}
