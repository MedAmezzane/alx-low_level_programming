#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 * finds and prints the sum of the even-valued terms,
 * followed by a new line.
 *
 * ps: The terms values do not exceed 4,000,000.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long f0 = 1, f1 = 2, f2 = 0, sum = 0;

	while (f2 < 4000000)
	{
		f2 = f1 + f0;
		f0 = f1;
		f1 = f2;
		if (f2 % 2 == 0)
		{
			sum += f2;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
