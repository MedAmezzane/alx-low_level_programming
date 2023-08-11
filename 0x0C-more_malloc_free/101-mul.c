#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int get_length(char *str);
char *initialize_xarray(int size);
char *skip_zeroes(char *str);
void calculate_product(char *prod, char *mult, int digit, int zeroes);
void add_numbers(char *final_prod, char *next_prod, int next_len);

/**
 * get_length - Computes the length of a null-terminated string.
 * @str: The input string.
 *
 * Return: The length of the string.
 */
int get_length(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}


/**
 * initialize_xarray - Creates an array of 'x' characters with the specified
 *						size.
 * @size: The size of the array.
 *
 * Return: A pointer to the newly allocated array, or exits with status 98 if
 *			memory allocation fails.
 */
char *initialize_xarray(int size)
{
	char *array;
	int index;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		exit(98);

	for (index = 0; index < (size - 1); index++)
		array[index] = 'x';

	array[index] = '\0';

	return (array);
}


/**
 * skip_zeroes - Moves the pointer to skip leading '0' characters.
 * @str: The input string.
 *
 * Return: A pointer to the first non-zero character in the string.
 */
char *skip_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}


/**
 * get_numeric_value - Converts a character to its corresponding digit value.
 * @c: The input character.
 *
 * Return: The digit value.
 */
int get_numeric_value(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}

	return (digit);
}


/**
 * calculate_product - Calculates the product of a number and a string.
 * @prod: The product array to be filled.
 * @mult: The multiplier string.
 * @digit: The digit to multiply by.
 * @zeroes: The number of trailing zeroes to append.
 *
 * This function calculates the product of a number and a string, with
 * an optional number of trailing zeroes, and stores the result in the
 * prod array.
 */
void calculate_product(char *prod, char *mult, int digit, int zeroes)
{
	int mult_len, num, tens = 0;

	mult_len = get_length(mult) - 1;
	mult += mult_len;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}

	prod--;

	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}

	for (; mult_len >= 0; mult_len--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}

		num = (*mult - '0') * digit;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens)
		*prod = (tens % 10) + '0';
}


/**
 * add_numbers - Adds two numbers represented as strings.
 * @final_prod: The resulting sum array.
 * @next_prod: The number to be added.
 * @next_len: The length of the number.
 *
 * This function adds two numbers represented as strings, with different
 * lengths, and stores the result in the final_prod array.
 */
void add_numbers(char *final_prod, char *next_prod, int next_len)
{
	int num, tens = 0;

	while (*(final_prod + 1))
		final_prod++;

	while (*(next_prod + 1))
		next_prod++;

	for (; *final_prod != 'x'; final_prod--)
	{
		num = (*final_prod - '0') + (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		next_prod--;
		next_len--;
	}

	for (; next_len >= 0 && *next_prod != 'x'; next_len--)
	{
		num = (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		final_prod--;
		next_prod--;
	}

	if (tens)
		*final_prod = (tens % 10) + '0';
}

/**
 * main - The entry point of the program.
 * @argc: The number of command-line arguments passed to the program.
 * @argv: An array an array of strings (character pointers) containing
 *		the command-line arguments.
 *
 * Description: Multiplies two input numbers and prints the result.
 *
 * Return: Always 0.
 *
 * Author: MedAMEZZANE
 */
int main(int argc, char *argv[])
{
	char *final_prod, *next_prod;
	int size, index, digit, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1] = skip_zeroes(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = skip_zeroes(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = get_length(argv[1]) + get_length(argv[2]);
	final_prod = initialize_xarray(size + 1);
	next_prod = initialize_xarray(size + 1);

	for (index = get_length(argv[2]) - 1; index >= 0; index--)
	{
		digit = get_numeric_value(*(argv[2] + index));
		calculate_product(next_prod, argv[1], digit, zeroes++);
		add_numbers(final_prod, next_prod, size - 1);
	}

	for (index = 0; final_prod[index]; index++)
	{
		if (final_prod[index] != 'x')
			putchar(final_prod[index]);
	}
	putchar('\n');
	free(next_prod);
	free(final_prod);

	return (0);
}
