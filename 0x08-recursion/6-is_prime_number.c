#include "main.h"
/**
 * check_prime - A helper function used by is_prime_number.
 * A recursive approach to check if a given number @n is a prime number.
 * @n: The number to evaluate
 * @i: The iterator
 *
 * Return: If the function finds a divisor of n return 0.
 * If the function exhausts all possible divisors return 1.
 *
 * Author: MedAMEZZANE
 *
 */
int check_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (check_prime(n, i - 1));
}
/**
 * is_prime_number - This is the main function that checks if the
 * given number @n is a prime number
 * @n: The number to evaluate
 *
 * Return: The result returned by check_prime is then returned
 * as the final result of is_prime_number.
 * (1 if n is prime, 0 if not)
 *
 * Author: MedAMEZZANE
 *
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, n - 1));
}
