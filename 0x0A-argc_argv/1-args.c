#include <stdio.h>

/**
 * main - The entry point of the program.
 * @argc: The number of command-line arguments passed to the program.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Description: This program prints the number of command-line arguments
 *              passed to the program (excluding the program name itself).
 *              It prints argc - 1 because argv[0] contains the program name.
 * Return: Always 0 (indicating successful execution).
 *
 * Author: MedAMEZZANE
 */
int main(int argc, char **argv)
{
	/* Suppress the "unused variable" compiler warning for argv. */
	(void)argv;

	/* Print the number of command-line arguments (excluding the program name). */
	printf("%d\n", argc - 1);

	/* Return 0 to indicate successful execution. */
	return (0);
}
