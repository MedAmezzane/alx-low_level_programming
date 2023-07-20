#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 * Prints the numbers from 1-100, followed by a new line.
 *
 * ps1: Fizz is printed instead of multiples of three.
 * ps2: Buzz is printed instead of multiples of five.
 * ps3: FizzBuzz is printed instead of multiples of both
 * three and five.
 *
 * Return: 0.
 *
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 15) == 0)
			printf("FizzBuzz");

		else if ((num % 3) == 0)
			printf("Fizz");

		else if ((num % 5) == 0)
			printf("Buzz");

		else
			printf("%d", num);

		if (num == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
