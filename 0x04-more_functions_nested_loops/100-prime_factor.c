#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (sucess)
 */
int main(void)
{
	int i;
	long int prime_number, numerator = 612852475143;

	for (i = 1; i <= numerator; i++)
	{
		if (numerator % i == 0)
			prime_number = i;
	}
	printf("%ld\n", prime_number);
	return (0);
}
