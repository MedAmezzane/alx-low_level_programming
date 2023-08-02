#include "main.h"
/**
 * _memcpy - Entry point
 * @dest: A pointer to the destination address where the memory
 * block will be copied to.
 * @src: A pointer to the source address from where the memory
 * block will be copied.
 * @n: The number of bytes to be copied from the source to the destination.
 *
 * Description:
 * A custom implementation of the standard library function memcpy,
 * which is used to copy a block of memory from a source location to
 * a destination location
 *
 * Return: The pointer @dest, which now points to the memory block that
 * has been copied from the src block.
 *
 * Author: MedAMEZZANE
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
