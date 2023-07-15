#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Description:
 * Use `putchar` function to Prints all the numbers of base 16 in lowercase
 * (i.e numbers between 0 to 9 and letters between a to f),
 * followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int numb;
	char letter;

	for (numb = 48; numb < 58; numb++)
	{
		putchar(numb);
	}

	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
