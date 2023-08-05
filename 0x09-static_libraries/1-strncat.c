#include "main.h"
/**
 * _strncat - Entry point
 * @dest: Destination of concatenated string (destination).
 * @src: String to be concatenated (source).
 * @n: number of bytes to be concatenated.
 *
 * Description:
 * Function that concatenates two strings. it will use at most @n bytes
 * from @src. @src does not need to be null terminated.
 *
 * Return: Pointer to the destination address.
 *
 * Author: MedAMEZZANE
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, index;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (index = 0; index < n && src[index] != '\0'; index++, length++)
	{
		dest[length] = src[index];
	}
	dest[length] = '\0';
	return (dest);
}
