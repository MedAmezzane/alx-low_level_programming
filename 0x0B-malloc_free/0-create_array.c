#include "main.h"
#include <stdlib.h>
/**
 * create_array - Entry point
 * @size: The size of the array to create.
 * @c: The character to initialize each element of the array with.
 *
 * Description: Allocates memory for an array of characters and initializes
 *              each element with the given character.
 * Return: A pointer to the newly allocated array, or NULL if memory
 * allocation fails or if size is 0.
 *
 * Author: MedAMEZZANE
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;           /* Pointer to the allocated memory block */
	unsigned int i = 0;  /* Loop counter */

	if (size == 0)
		return (NULL);   /* Return NULL if size is 0 */

	ptr = malloc(size * sizeof(char)); /* Allocate memory for the array */
	if (ptr == NULL)
		return (NULL);   /* Return NULL if memory allocation fails */

	while (i < size)
	{
		ptr[i] = c;      /* Initialize each element with the given character */
		i++;
	}

	return (ptr);        /* Return the pointer to the allocated array */
}
