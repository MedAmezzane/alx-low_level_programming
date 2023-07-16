#include <stdio.h>
/**
 * main - Prints all possible combinations of two two-digit numbers,
 * followed by a new line.
 *
 * Description:
 * Use `putchar` function to prints all possible combinations of two
 * two-digit numbers (i.e All numbers should be printed with two
 * digits. 1 should be printed as 01),
 * followed by a new line.
 *
 * ps: 00 01 and 01 00 are considered as the same combination of the
 * numbers 0 and 1
 *
 * Return: 0
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 100; num1++)
	{
		for (num2 = 0; num2 < 100; num2++)
		{
			if (num1 < num2)
			{
				putchar((num1 / 10) + 48);
				putchar((num1 % 10) + 48);
				putchar(' ');
				putchar((num2 / 10) + 48);
				putchar((num2 % 10) + 48);
				if (num1 != 98 || num2 != 99)
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
