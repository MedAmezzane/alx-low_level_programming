#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line.
 *
 * Description:
 * Use `putchar` function to prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
