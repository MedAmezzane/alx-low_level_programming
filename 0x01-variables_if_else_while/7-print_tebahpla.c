#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 * Description:
 * Use `putchar` function to prints lowercase alphabet in reverse,
 * followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
