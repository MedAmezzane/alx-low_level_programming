#include "main.h"
/**
 * get_bit - Get the value of a bit at a given index.
 * @n: The unsigned long int from which to retrieve the bit.
 * @index: The index of the bit to retrieve.
 * Return: The value of the bit at the specified index, or -1 on error.
 *
 * Description:
 * This function returns the value (0 or 1) of the bit at the specified index
 * in the given unsigned long int. The index should be in the range of 0 to 63.
 * If the index is out of range, the function returns -1 to indicate an error.
 *
 * Author: MedAMEZZANE
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1); /*Return -1 if index is out of range*/

	bit_value = (n >> index) & 1; /*Extract the bit at the given index*/

	return (bit_value); /*Return the value of the extracted bit*/
}
