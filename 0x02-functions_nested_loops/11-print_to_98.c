#include "main.h"
/**
 * print_to_98 - Entry point
 *
 * Description:
 * prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: The starting number.
 *
 * ps: The function print the numbers from `n` to 98
 * in ascending or descending order, depending on whether `n`
 * is less than or greater than 98, separated by commas.
 *
 * Return: The sum of the two integers.
 *
 */

ivoid print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
