#include "main.h"
/**
 * set_bit - Set the value of a bit at a given index to 1.
 * @n: Pointer to the unsigned long int in which to set the bit.
 * @index: The index of the bit to set to 1.
 * Return: 1 if successful, or -1 on error.
 *
 * Description:
 * This function sets the value of the bit at the specified index in the
 * given unsigned long int to 1. The index should be in the range of 0 to 63.
 * If the index is out of range, the function returns -1 to indicate an error.
 * Otherwise, the bit is successfully set to 1 and the function returns 1.
 *
 * Author: MedAMEZZANE
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1); /*Return -1 if index is out of range*/

	*n = ((1UL << index) | *n); /*Set the bit at the given index to 1*/

	return (1); /*Return 1 to indicate successful operation*/
}
