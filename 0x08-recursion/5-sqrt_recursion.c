#include "holberton.h"
/**
 * check_sqrt_recursion - chacks a natural square root of a number
 * @n: integer
 * @i: integer
 * Return: square root
 */
int check_sqrt_recursion(int n, int i)
{

	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (check_sqrt_recursion(n, i + 1));
}

/**
 * _sqrt_recursion - calculates the square root of a number
 * @n: integer
 * Return: square root of an integer if found, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	return (check_sqrt_recursion(n, 1));
}
