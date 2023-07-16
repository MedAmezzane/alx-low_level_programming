#include <stdio.h>
/**
 * main - Prints all possible combinations of two digits numbers,
 * followed by a new line.
 *
 * Description:
 * Use `putchar` function to prints all possible combinations of two digits
 * numbers (i.e numbers  00 to 89 separeted with commas and spaces),
 * followed by a new line.
 * ps: 01 and 10 are considered as the same combination of the two digits
 *
 * Return: 0
 */
int main(void)
{
	int num1, num2;

	for (num1 = 48; num1 < 57; num1++)
	{
		for (num2 = 49; num2 < 58; num2++)
		{
			if (num1 < num2)
			{
				putchar(num1);
				putchar(num2);
				if (num1 != 56 || num2 != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
