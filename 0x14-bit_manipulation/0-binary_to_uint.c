#include "main.h"
/**
 * binary_to_uint - Convert a binary string to an unsigned integer.
 * @b: Pointer to the binary string.
 * Return: Converted unsigned integer, or 0 if conversion fails.
 *
 * Description:
 * This function converts a binary string(consisting of '0' and '1' characters)
 * to an unsigned integer. The binary string is processed from right to left,
 * with each digit being multiplied by powers of 2 based on its position.
 * If the input string is NULL or contains characters other than '0' and '1',
 * the function returns 0 to indicate conversion failure.
 *
 * Author: MedAMEZZANE
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int length, base_multi;

	if (!b)
		return (0);

	result = 0; /*Initialize the unsigned integer to be returned*/

	/*Calculate the length of the binary string*/
	for (length = 0; b[length] != '\0'; length++)
		;

	/*Process the binary string from right to left*/
	for (length--, base_multi = 1; length >= 0; length--, base_multi *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0); /*Return 0 on encountering non-binary characters*/
		}

		if (b[length] & 1) /*Convert the binary digit to an integer*/
		{
			result += base_multi; /*Add to the unsigned integer*/
		}
	}

	return (result);
}
