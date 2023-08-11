#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc and checks for allocation was
 *					successful.
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory.
 * If malloc fails, the function exits with status 98.
 *
 * Author: MedAMEZZANE
 */
void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);
	if (memory == NULL)
		exit(98);
	return (memory);
}
