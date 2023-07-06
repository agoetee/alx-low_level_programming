#include "main.h"

/**
 * prime - checks if number is prime
 * @n: the number
 * @j: the iterator
 * Return: 1 if prime and 0 if not
 */
int prime(unsigned int n, unsigned int j)
{
	if (n % j == 0)
	{
		if (n == j)
			return (1);
		else
			return (0);
	}
	return (0 + prime(n, j + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number
 * Return: 1 if prime and 0 if not
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime(n, 2));
}
