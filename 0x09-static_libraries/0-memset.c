#include "main.h"
/**
 * _memset - Entry point
 * @s: A pointer to the starting address of the memory block that
 * needs to be filled.
 * @b: The value to be written to each byte of the memory block.
 * @n: The number of bytes to be filled with the value b.
 *
 * Description:
 * A custom implementation of the standard library function memset,
 * which is used to fill a block of memory with a particular value
 *
 * Return: The pointer @s, which points to the memory block that
 * has been filled with the value @b.
 *
 * Author: MedAMEZZANE
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
