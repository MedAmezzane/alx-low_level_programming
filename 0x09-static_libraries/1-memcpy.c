#include "main.h"
/**
 * _memcpy - copies n bytes from  src to dest
 * @dest: memory area desination
 * @src: memory area source
 * @n: member of bytes
 *
 * Return: memory area dest
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
