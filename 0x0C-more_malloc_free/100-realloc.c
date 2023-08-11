#include "main.h"
#include <stdlib.h>
/**
 * _realloc - Reallocates a memory block with a new size.
 * @ptr: Pointer to the original memory block.
 * @old_size: The current size of the memory block.
 * @new_size: The desired new size for the memory block.
 *
 * Return: A pointer to the reallocated memory block, or NULL if memory
 *			allocation fails.
 *         If new_size is the same as old_size, returns ptr.
 *         If ptr is NULL, behaves like malloc.
 *         If new_size is 0 and ptr is not NULL, frees memory and returns NULL.
 *
 * Author: MedAMEZZANE
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned char *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)	/* If pointer is NULL, allocate new memory and return */
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	i = 0;

	if (new_size > old_size)	/* Copy data from old pointer to new pointer */
	{
		while (i < old_size)
		{
			new_ptr[i] = ((char *)ptr)[i];
			i++;
		}
		free(ptr);
		return (new_ptr);
	}
	/* If new_size < old_size, copy data up to new_size */
	while (i < new_size)
	{
		new_ptr[i] = ((char *)ptr)[i];
		i++;
	}
	free(ptr);
	return (new_ptr);
}
