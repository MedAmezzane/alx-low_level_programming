#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 * Prints the first 50 Fibonacci numbers, starting with 1
 * and 2, followed by a new line.
 *
 * ps: The numbers are separated by comma, followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long f0 = 1, f1 = 2, sum;

	printf("%lu, %lu ,", f0, f1);

	for (i = 0; i < 50; i++)
	{
		sum = f1 + f0;
		printf("%lu", sum);
		f0 = f1;
		f1 = sum;
		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
