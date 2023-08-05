#include <stdio.h>

/**
 * main - The entry point of the program.
 * @argc: The number of command-line arguments passed to the program.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Description: This program prints all the command-line arguments passed to
 *              it, including the program name (argv[0]).
 *      It loops through the argv array and prints each argument on a new line.
 * Return: Always 0 (indicating successful execution).
 *
 * Author: MedAMEZZANE
 */
int main(int argc, char **argv)
{
	int i;

	/* Loop through the argv array to print all command-line arguments. */
	for (i = 0; i < argc; i++)
	{
		/* Print each argument on a new line. */
		printf("%s\n", argv[i]);
	}

	/* Return 0 to indicate successful execution. */
	return (0);
}
