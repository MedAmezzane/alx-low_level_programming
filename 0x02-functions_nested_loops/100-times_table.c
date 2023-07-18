#include "main.h"
/**
 * print_times_table - Entry point
 * @n: number of times table to print (0 < n <= 15)
 *
 * Description:
 * Prints the n times table.
 *
 * Example Table
 * 0,  0,  0,  0,  0,  ..
 * 0,  1,  2,  3,  4,  ..
 * 0,  2,  4,  6,  8,  ..
 *
 * Return: void
 *
 */

void print_times_table(int n)
{
	int num1, num2, prod;

	if (n >= 0 && n <= 15)
	{
		for (num1 = 0; num1 < n + 1; num1++)
		{
			for (num2 = 0; num2 < n + 1; num2++)
			{
				prod = num1 * num2;
				if (num2 != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (prod >= 100 && num2 != 0)
				{
					/*get the three digits*/
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10)) % 10 + '0');
					_putchar(prod % 10 + '0');
				}
				else if (prod >= 10 && prod < 100)
				{
					_putchar(' ');
					/*get the two digits*/
					_putchar((prod / 10) + '0');
					_putchar((prod % 10) + '0');
				}
				else if (prod < 10 && (num2 != 0))
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(prod + '0');
				}
				else
					_putchar(prod % 10 + '0');
			}
			_putchar('\n');
		}
	}
}
