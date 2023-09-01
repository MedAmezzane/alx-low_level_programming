#include "main.h"
/**
 * flip_bits - Count the number of bits needed to flip to transform one number
 * to another.
 * @n: The first unsigned long int.
 * @m: The second unsigned long int.
 * Return: The number of bits needed to flip.
 *
 * Description:
 * This function counts the number of bits that need to be flipped in order to
 * transform one unsigned long int (n) to another (m). The XOR operation (^)
 * is used to find the differing bits between the two numbers. Then, a loop
 * iterates through each bit position, and the count of differing bits is
 * accumulated. The function returns the total count of differing bits.
 *
 * Author: MedAMEZZANE
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int differing_bits = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = differing_bits >> i;
		if (current & 1)
			count++; /*Count set bits*/
	}

	return (count); /*Return the count of differing bits*/
}
