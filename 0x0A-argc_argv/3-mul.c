#include <stdio.h>
#include <stdlib.h> /*for the atoi function.*/

/**
 * main - The entry point of the program.
 * @argc: The number of command-line arguments passed to the program.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Description: This program multiplies two integers passed as command-line
 *           arguments.
 *           It expects exactly two arguments (excluding the program name).
 *           If the number of arguments is not 3 (program name + 2 integers),
 *           it prints "Error" and returns 1 to indicate an error.
 *           Otherwise, it converts the two arguments to integers using atoi,
 *           multiplies them, and prints the result.
 * Return: 0 for successful execution, 1 for an error.
 *
 * Author: MedAMEZZANE
 */
int main(int argc, char **argv)
{
	int x, y;

	/* Check if the number of arguments is less than 3 */
	if (argc < 3)
	{
		/* Print an error message. */
		printf("Error\n");

		/* Return 1 to indicate an error. */
		return (1);
	}

	/* Convert the first argument (argv[1]) to an integer using atoi. */
	x = atoi(argv[1]);

	/* Convert the second argument (argv[2]) to an integer using atoi. */
	y = atoi(argv[2]);

	/* Multiply the two integers and print the result. */
	printf("%d\n", x * y);

	/* Return 0 to indicate successful execution. */
	return (0);
}
