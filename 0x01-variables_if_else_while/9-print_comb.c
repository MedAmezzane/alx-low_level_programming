#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers,
 * followed by a new line.
 *
 * Description:
 * Use `putchar` function to prints all possible combinations of
 * single-digit numbers, (i.e numbers  0 to 9 separeted with commas
 * and spaces), followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
