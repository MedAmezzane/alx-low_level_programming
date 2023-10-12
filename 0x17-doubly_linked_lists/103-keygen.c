#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Entry point.
 * @argc: Number of arguments.
 * @argv: Array of argument strings.
 *
 * Return: 0 for success, 1 for incorrect usage.
 */
int main(int argc, char *argv[])
{
	unsigned int index, largestChar;
	size_t usernameLen, asciiSum, asciiProduct, asciiSumOfSquares, randomValue;
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char key[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	usernameLen = strlen(argv[1]);

	key[0] = l[(usernameLen ^ 59) & 63];/*Generate first character of the key*/
	/*Calculate the sum of ASCII values of the characters in the username.*/
	for (index = 0, asciiSum = 0; index < usernameLen; index++)
		asciiSum += argv[1][index];
	key[1] = l[(asciiSum ^ 79) & 63];/*Generate second character of the key*/
	/*Calculate the product of ASCII values of the characters in the username.*/
	for (index = 0, asciiProduct = 1; index < usernameLen; index++)
		asciiProduct *= argv[1][index];
	key[2] = l[(asciiProduct ^ 85) & 63];/*Generate third character of the key*/
	/*Find the character with the largest ASCII value in the username.*/
	for (largestChar = argv[1][0], index = 0; index < usernameLen; index++)
	{
		if ((char)largestChar <= argv[1][index])
			largestChar = argv[1][index];
	}
	/*Seed the random number generator with the largest character's ASCII value.*/
	srand(largestChar ^ 14);
	key[3] = l[rand() & 63];/*Gen fourth character of the key using random value*/
	/*Calculate the sum of squares of the ASCII values of the characters.*/
	for (index = 0, asciiSumOfSquares = 0; index < usernameLen; index++)
		asciiSumOfSquares += argv[1][index] * argv[1][index];
	key[4] = l[(asciiSumOfSquares ^ 239) & 63];/*Gen fifth character of the key*/
	/*Generate the sixth character of the key using a random value.*/
	for (randomValue = 0, index = 0; (char)index < argv[1][0]; index++)
		randomValue = rand();
	key[5] = l[(randomValue ^ 229) & 63];
	printf("%s\n", key);/*Print the generated key.*/
	return (0);
}
