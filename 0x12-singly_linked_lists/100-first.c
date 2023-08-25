#include <stdio.h>

/**
 * hare - Function that runs automatically before the main function.
 *
 * Description: This function is marked with the attribute "constructor",
 * which means it will be automatically executed before the main function
 * when the program starts. It prints two lines of text to the standard output.
 *
 * Author: MedAMEZZANE
 */
void __attribute__((constructor)) hare(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
