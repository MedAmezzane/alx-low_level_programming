#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determines if the last digit of a random number is greater
 * than 5, or less than 6, or is zero.
 *
 * Description:
 * assigns a random number to int n everytime it executes, and prints it
 * followed by 'is positive', 'is negative' or 'is zero'
 *
 * Return: 0
 */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is
			greater than 5\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	else
	{
		printf("Last digit of %d is %d and is
			less than 6 and not 0\n", n, last_digit);
	}
	return (0);
}
