#include "holberton.h"
#include <stdio.h>
/**
  *print_array - prints n elements of an array of integers
  *@a: array
  *@n: integer
  *Return: nothing
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%i, ", a[i]);
	}
	printf("%i", a[n - 1]);

printf("\n");
}
