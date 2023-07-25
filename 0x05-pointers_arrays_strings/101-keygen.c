#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description:
 *  Generates random valid passwords for the
 *  program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	char password[84];
	int index = 0, sum = 0, diff_half1, diff_half2;

	srand(time(0));
	/*Keep generating random ASCII characters until their sum reaches 2772.*/
	while (sum < 2772)
	{
		/*Generate a random printable ASCII character and add it to the password.*/
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}
	password[index] = '\0'; /*Null terminate the password string.*/
	/*If the total sum of the characters in the password exceeds 2772...*/
	if (sum != 2772)
	{
		/*Calculate the excess amount (divided by two).*/
		diff_half1 = (sum - 2772) / 2;
		diff_half2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			diff_half1++;
		/*Reduce the excess amount of the characters in the password.*/
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + diff_half1))
			{
			password[index] -= diff_half1;
			break;
			}
		}
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + diff_half2))
			{
				password[index] -= diff_half2;
				break;
			}
		}
	}
	printf("%s\n", password);
	return (0);
}
