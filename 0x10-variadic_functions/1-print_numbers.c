#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints a variable number of integers separated by a string.
 * @separator: The string used to separate the integers.
 * @n: Number of integers to be printed.
 * @...: Variable list of integers to be printed.
 *
 * Description: This function prints a series of integers separated by the
 * given separator string, followed by a newline character.
 *
 * Author: MedAMEZZANE
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (i < n - 1 && separator)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
