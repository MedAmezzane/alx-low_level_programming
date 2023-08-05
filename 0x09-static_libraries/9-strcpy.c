#include <stdio.h>
#include "main.h"

/**
 * _strcpy - Entry point
 * @dest: Address where string will be copied to (destination).
 * @src: Original string to be copied (source).
 *
 * Description:
 * Copies the string pointed to by src,
 * including the terminating null byte, to the
 * buffer pointed to by dest.
 *
 * Return: Pointer to the destination address.
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	/* copy the null byte */
	dest[count] = src[count];
	return (dest);
}
