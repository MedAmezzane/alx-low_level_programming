#include "main.h"
/**
 * times_table - Entry point
 *
 * Description:
 * Prints the 9 times table, starting with 0.
 *
 * Example Table
 * 0, 0, 0, 0, 0, ..
 * 0, 1, 2, 3, 4, ..
 * 0, 2, 4, 6, 8, ..
 *
 * Return: void
 *
 */

void times_table(void);
{

	int num1, num2, prod;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			prod = num1 * num2;
			if (num2 == 0)
			{
				_putchar(prod + '0');
			}
			if (prod < 10 && num2 != 0)
			/*put two spaces if product is a single number*/
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + '0');
			}
			else if (prod >= 10)
			/*put one space if product is a two-digit number*/
			{
				_putchar(',');
				_putchar(' ');
				/*get the first digit*/
				_putchar((k / 10) + '0');
				/*get the second digit*/
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
