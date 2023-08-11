#include "main.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of integers with values from min (included)
 *				to max (included).
 * @min: The starting value of the range.
 * @max: The ending value of the range.
 *
 * Return: A pointer to the newly allocated array, or NULL if memory allocation
 *         fails or if min is greater than max.
 *
 * Author: MedAMEZZANE
 */
int *array_range(int min, int max)
{
	int *range_array;
	int i, size;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;
	/* Allocate memory for the array */
	range_array = malloc(size * sizeof(*range_array));
	if (range_array == NULL)
		return (NULL);
	/* Fill the array with integers within the specified range from min to max */
	for (i = 0; i < size && min <= max; i++, min++)
		*(range_array + i) = min;

	return (range_array);
}
