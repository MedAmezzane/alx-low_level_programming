#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array of elements, each initialized to 0.
 * @nmemb: The number of elements to allocate memory for.
 * @size: The size of each element.
 *
 * Return: A pointer to the newly allocated memory block, or NULL if memory
 *          allocation fails or nmemb/size is 0.
 *
 * Author: MedAMEZZANE
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory_block;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Allocate memory for the array */
	memory_block = malloc(nmemb * size);
	if (memory_block == NULL)
		return (NULL);
	/* Initialize all elements to zero */
	for (i = 0; i < (nmemb * size); i++)
		memory_block[i] = 0;

	return (memory_block);
}
