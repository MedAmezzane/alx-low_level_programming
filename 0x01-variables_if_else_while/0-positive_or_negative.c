#include <stdlib.h>
#include <time.h>
/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Description:
 * assigns a random number to int n everytime it executes, and prints it
 * followed by 'is positive', 'is negative' or 'is zero'
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		/* if n<0 */
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		/* if n>0 */
		printf("%d is positive\n", n);
	}
	else
	{
		/* if none of the conditions is true i.e n=0 */
		printf("%d is zero\n", n);
	}

	return (0);
}
