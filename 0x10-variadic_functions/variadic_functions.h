#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

/**
 * struct print - A structure representing a format specifier and its
 * corresponding printing function.
 * @t: The format specifier string.
 * @f: Pointer to the printing function that handles the format specifier.
 */
typedef struct print
{
	char *t;
	void (*f)(va_list);
} print_t;

#endif
