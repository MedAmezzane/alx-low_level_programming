#include <stdio.h>
#include <stdlib.h> /* for the strtol function */

/**
 * main - The entry point of the program.
 * @argc: The number of command-line arguments passed to the program.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Description: This program calculates the sum of integers passed as
 *          command-line arguments.
 *          It expects at least one argument (excluding the program name)
 *          containing an integer.
 *          If no arguments are provided, it prints "0" and returns 0.
 *          Otherwise, it converts each argument to an integer using strtol
 *          and adds them up.
 *          If any argument is not a valid integer, it prints "Error"
 *          and returns 1.
 * Return: 0 for successful execution, 1 for an error.
 */
int main(int argc, char **argv)
{
	int i, n, sum = 0;
	char *fl;

	/* Check if the number of arguments is less than 2 */
	if (argc < 2)
	{
		/* Print "0" if no arguments are provided. */
		printf("0\n");

		/* Return 0 to indicate successful execution. */
		return (0);
	}

	/* Loop through each command-line argument (excluding the program name). */
	for (i = 1; argv[i]; i++)
	{
		/* Convert the argument (argv[i]) to an integer using strtol. */
		n = strtol(argv[i], &fl, 10);

		/* Check if any non-integer characters were encountered during conversion. */
		if (*fl)
		{
			/* Print "Error" if the argument is not a valid integer. */
			printf("Error\n");

			/* Return 1 to indicate an error. */
			return (1);
		}
		else
		{
			/* Add the integer value to the sum. */
			sum += n;
		}
	}

	/* Print the final sum of integers. */
	printf("%d\n", sum);

	/* Return 0 to indicate successful execution. */
	return (0);
}
