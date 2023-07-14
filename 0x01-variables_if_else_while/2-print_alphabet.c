#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, followed by
 * a new line.
 *
 * Description:
 * Use `putchar` function to prints the alphabet in lowercase,
 * followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";

	int i;
	for (i = 0; i < 26; i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
