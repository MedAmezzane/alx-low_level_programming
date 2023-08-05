#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: constant of byte
 * @n: first n bytes of the memory area
 *
 * Return: Always value
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
