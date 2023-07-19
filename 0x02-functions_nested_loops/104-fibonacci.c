#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 * Prints the first 98 Fibonacci numbers, starting with 1
 * and 2, without using long long, followed by a new line.
 *
 * ps: The numbers are separated by comma, followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long f0 = 1, f1 = 2, sum;
	unsigned long f0_half1, f0_half2, f1_half1, f1_half2;
	unsigned long sum_half1, sum_half2;

	printf("%lu, %lu", f0, f1);
	for (i = 2; i < 92; i++)
	{
		sum = f1 + f0;
		printf(", %lu", sum);
		f0 = f1;
		f1 = sum;
	}
	f0_half1 = f0 / 10000000000;
	f0_half2 = f0 % 10000000000;
	f1_half1 = f1 / 10000000000;
	f1_half2 = f1 % 10000000000;
	for (i = 92; i < 98; i++)
	{
		sum_half1 = f0_half1 + f1_half1;
		sum_half2 = f0_half2 + f1_half2;
		if (f0_half2 + f1_half2 > 9999999999)
		{
			sum_half1 += 1;
			sum_half2 %= 10000000000;
		}
		printf(", %lu%lu", sum_half1, sum_half2);
		f0_half1 = f1_half1;
		f0_half2 = f1_half2;
		f1_half1 = sum_half1;
		f1_half2 = sum_half2;
	}
	printf("\n");

	return (0);
}
