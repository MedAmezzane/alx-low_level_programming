#include "main.h"
/**
 * _strncat - Entry point
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: n bytes from @src to be concatenated
 * Description:
 * Function that concatenates two strings.
 * Except that it will use at most n bytes from @src
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, lengthD, lengthS;

	lengthD = 0;
	lengthS = 0;
	i = 0;
	while (*(dest + lengthD))
		lengthD++;
	while (*(src + lengthS))
	lengthS++;
	while ((*(dest + lengthD) = *(src + i)) && i < (n - 1))
	{
		lengthD++;
		i++;
	}
	/*	if (i > lengthS - 1)*/
	*(dest + lengthD + i) = '\0';
	return (dest);
}
