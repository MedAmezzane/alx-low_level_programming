#include "main.h"
/**
 * clear_bit - Clear the value of a bit at a given index to 0.
 * @n: Pointer to the unsigned long int in which to clear the bit.
 * @index: The index of the bit to clear to 0.
 * Return: 1 if successful, or -1 on error.
 *
 * Description:
 * This function clears the value of the bit at the specified index in the
 * given unsigned long int to 0. The index should be in the range of 0 to 63.
 * If the index is out of range, the function returns -1 to indicate an error.
 * Otherwise, the bit is successfully cleared to 0 and the function returns 1.
 *
 * Author: MedAMEZZANE
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1); /*Return -1 if index is out of range*/

	*n = (~(1UL << index) & *n); /*Clear the bit at the given index to 0*/

	return (1); /*Return 1 to indicate successful operation*/
}
