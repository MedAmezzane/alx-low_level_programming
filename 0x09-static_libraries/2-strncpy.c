#include "main.h"
/**
 * _strncpy - Entry point
 * @dest: Destination of copied string (destination).
 * @src: String to be copied (source).
 * @n: Number of characters from @src to be copied.
 *
 * Description:
 * Function that copies a string from @src into @dest.
 *
 * Return: Pointer to the destination address.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
