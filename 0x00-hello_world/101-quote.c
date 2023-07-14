#include <stdio.h>
#include <unistd.h>
/**
 * main - prints the last part of a quote in the standard error
 *
 * Description:
 * '2': This number represents the file descriptor associated with the standard
 * error stream. In most systems, '2' is the file descriptor for stderr.
 * '59' : This is the number of bytes to be written from the given string.
 * Since the string has 59 characters (including the null terminator '\0' at
 * the end), it specifies the length of the string to be written.
 *
 * Return: 1 if success
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
