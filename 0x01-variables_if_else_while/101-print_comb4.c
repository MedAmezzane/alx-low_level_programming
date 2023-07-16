#include <stdio.h>
/**
 * main - Prints all possible different combinations of three digits numbers,
 * followed by a new line.
 *
 * Description:
 * Use `putchar` function to prints all possible combinations of three digits
 * followed by a new line.
 * ps: 012, 120, 102, 021, 201, 210 are considered the same combination of
 * the three digits 0, 1 and 2
 *
 * Return: 0
 */
int main(void)
{
	int num1, num2, num3;

	for (num1 = 48; num1 < 58; num1++)
	{
		for (num2 = 49; num2 < 58; num2++)
		{
			for (num3 = 50; num3 < 58; num3++)
			{
			if (num1 < num2 && num2 < num3)
				{
				putchar(num1);
				putchar(num2);
				putchar(num3);
				if (num1 != 55 || num2 != 56 || num3 != 57)
				{
					putchar(',');
					putchar(' ');
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
