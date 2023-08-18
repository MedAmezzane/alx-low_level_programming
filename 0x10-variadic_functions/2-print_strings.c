#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h">

/**
 * print_strings - Prints a variable number of strings separated by a string.
 * @separator: The string used to separate the strings.
 * @n: Number of strings to be printed.
 * @...: Variable list of strings to be printed.
 *
 * Description: This function prints a series of strings separated by the given
 * separator string, followed by a newline character. If a string is NULL, "(nil)"
 * is printed instead.
 *
 * Author: MedAMEZZANE
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1 && separator)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
