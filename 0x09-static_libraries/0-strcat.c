#include "main.h"
/**
 * _strcat - Entry point
 * @dest: Destination of concatenated string (destination).
 * @src: String to be concatenated (source).
 *
 * Description:
 * Function that concatenates two strings.
 *
 * Return: Pointer to the destination address.
 *
 * Author: MedAMEZZANE
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
