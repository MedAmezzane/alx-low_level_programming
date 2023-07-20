#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 * Calculates the largest prime factor of the number 612852475143
 * using a simple loop and division approach.
 *
 * Return: 0.
 *
 */

int main(void)
{
	long int num, prim_fac;

	num = 612852475143;

	for (prim_fac = 2; prim_fac <= num; prim_fac++)
	{
		if (num % prim_fac == 0)
		{
		/*Reducing num to its updated value without the factor*/
			num /= prim_fac;
		/*recheck the same value of prim_fac in the next iteration*/
			prim_fac--;
		}
	}
	printf("%ld\n", prim_fac);
	return (0);
}
