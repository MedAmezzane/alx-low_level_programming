#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_c - Prints a char from va_list.
 * @c: va_list containing char to be printed.
 */
void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_s - Prints a string from va_list.
 * @s: va_list containing string to be printed.
 */
void print_s(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_i - Prints an integer from va_list.
 * @i: va_list containing integer to be printed.
 */
void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_f - Prints a float from va_list.
 * @f: va_list containing float to be printed.
 */
void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_all - Prints a list of variables of different types.
 * @format: Format string indicating the type of each variable.
 * @...: Variable list of variables to be printed.
 *
 * Description: This function prints variables of different types based on
 * the provided format string, separated by commas and followed by a newline.
 *
 * Author: MedAMEZZANE
 */
void print_all(const char *const format, ...)
{
	unsigned int i, j;
	va_list valist;
	char *separator = "";

	/* Array of structs with type specifier and print function */
	print_t p[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"f", print_f},
		{NULL, NULL}
	};

	va_start(valist, format);
	i = 0;

	while (format && format[i])
	{
		j = 0;
		while (p[j].t != NULL)
		{
			if (*(p[j].t) == format[i])
			{
				printf("%s", separator);
				p[j].f(valist);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(valist);

	printf("\n");
}
