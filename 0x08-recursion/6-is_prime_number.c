#include "holberton.h"
/**
 * prime - checks if the number is prime
 * @n: integer
 * @i: integer
 * Return: integer
 */
int prime(int i, int n)
{
	if (n % i == 0)
		return (0);
	if (i > n / 2)
		return (1);
	return (prime(i + 1, n));
}

/**
 * is_prime_number - returns prime numbers
 * @n: integer
 * Return: integer
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime(2, n));
}
