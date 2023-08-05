#include <stdio.h>

/**
 * main - The entry point of the program.
 * @argc: The number of command-line arguments passed to the program.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Description: This program prints the name of the program itself
 *             (the first command-line argument, typically the program's name).
 * Return: Always 0 (indicating successful execution).
 *
 * Author: MedAMEZZANE
 */
int main(int argc, char **argv)
{
	/*Since the variable argc is not used in the code, the (void)argc;*/
	/*statement is used to suppress the "unused variable" compiler warning.*/
	(void)argc;

	/*Print the value of argv[0], which is the name of the program itself.*/
	/*argv[0] is a string representing the program name. */
	printf("%s\n", argv[0]);

	/* Return 0 to indicate successful execution. */
	return (0);
}
