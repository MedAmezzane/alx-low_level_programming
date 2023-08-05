#include <stdio.h>
#include <stdlib.h> /*for the strtol function*/

/**
 * main - The entry point of the program.
 * @argc: The number of command-line arguments passed to the program.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Description: This program calculates the minimum number of coins required
 *            to make change for a given amount of money in cents.
 *            It expects one argument (excluding the program name) representing
 *            the total amount of money in cents.
 *            The program uses coins of denominations {25, 10, 5, 2}.
 * Return: 0 for successful execution, 1 for an error.
 *
 * Author: MedAMEZZANE
 */
int main(int argc, char **argv)
{
	int total, count;
	unsigned int i;
	char *p;
	int cents[] = {25, 10, 5, 2};

	/* Check if the number of arguments is not equal to 2*/
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	/* Convert the argument (argv[1]) to an integer using strtol. */
	total = strtol(argv[1], &p, 10);
	count = 0;
	/* Check if the conversion was successful */
	if (!*p)
	{
		/* Calculate the minimum number of coins required for making change. */
		while (total > 1)
		{
			for (i = 0; i < sizeof(cents) / sizeof(cents[0]); i++)
			{
				if (total >= cents[i])
				{
					count += total / cents[i];
					total = total % cents[i];
				}
			}
		}
		/* Add an extra coin for the remaining cent, if any. */
		if (total == 1)
			count++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", count);
	return (0);
}
