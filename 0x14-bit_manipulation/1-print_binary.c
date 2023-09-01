#include "main.h"
/**
 * print_binary - Print the binary representation of an unsigned long int.
 * @n: The unsigned long int to be printed in binary.
 *
 * Description:
 * This function prints the binary representation of an unsigned long int.
 * It starts from the most significant bit and prints each bit from left to
 * right, skipping leading zeros. If the input is 0, a single '0' is printed.
 *
 * Author: MedAMEZZANE
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int bit_value;

	for (i = 63; i >= 0; i--)
	{
		bit_value = n >> i;

		if (bit_value & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
