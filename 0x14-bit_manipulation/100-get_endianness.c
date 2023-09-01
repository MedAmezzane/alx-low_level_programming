#include "main.h"
/**
 * get_endianness - Determine the endianness of the system.
 * Return: 0 if big endian, 1 if little endian.
 *
 * Description:
 * This function determines the endianness of the system by storing a value 1
 * in an integer variable 'x'. It then interprets the memory location of 'x' as
 * a char pointer 'y'. If the value stored at the memory location pointed to
 * by 'y' is 1, it means the least significant byte is stored at the lower
 * memory address, indicating a little endian system. Otherwise, it's a big
 * endian system.
 *
 * Author: MedAMEZZANE
 */
int get_endianness(void)
{
	int x;
	char *y;

	x = 1;
	y = (char *)&x;
	return (*y); /*Return 0 for big endian, 1 for little endian*/
}
