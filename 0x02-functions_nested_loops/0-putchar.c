#include "main.h"
/**
 * main - Entry point
 *
 * Description:
 * Use the custom `_putchar` function to prints "_putchar",
 * followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	char text[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}
