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
 *
 * Author: MedAMEZZANE
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	while (index < n && *(src + index))
	{
		*(dest + index) = *(src + index);
		index++;
	}
	/*Fill any remaining spaces with null characters*/
	while (index < n)
	{
		*(dest + index) = '\0';
		index++;
	}
	return (dest);
}
