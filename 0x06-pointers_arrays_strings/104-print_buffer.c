#include "main.h"
#include <stdio.h>
/**
 * print_buffer - Entry point
 * @b: A pointer to the memory buffer to be displayed.
 * @size: An integer representing the size (in bytes) of the memory buffer.
 *
 * Description:
 * Display the contents of a memory buffer in a specific format.
 * (10 bytes at a time, starting with the byte position, then showing
 * the hex content, then displaying printable charcaters.)
 *
 * Return: No return
 *
 * Author: MedAMEZZANE
 */
void print_buffer(char *b, int size)
{
	int byte, index;

	for (byte = 0; byte < size; byte += 10)
	{
	/*Print the offset address of the current row in hex with leading zeros*/
		printf("%08x: ", byte);
		/*print the hex representation of 10 bytes in the current row*/
		for (index = 0; index < 10; index++)
		{
			if ((index + byte) >= size)
				printf("  ");

			else
				printf("%02x", *(b + index + byte));

			if ((index % 2) != 0 && index != 0)
				printf(" ");
		}
		/*print the ASCII representation of the 10 bytes in the current row*/
		for (index = 0; index < 10; index++)
		{
			if ((index + byte) >= size)
				break;

			else if (*(b + index + byte) >= 31 &&
				 *(b + index + byte) <= 126)
				printf("%c", *(b + index + byte));

			else
				printf(".");
		}

		if (byte >= size)
			continue;

		printf("\n");
	}
	/*Check if the buffer size is <= to 0, if so, print a newline character*/
	if (size <= 0)
		printf("\n");
}
