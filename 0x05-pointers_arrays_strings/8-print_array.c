#include "holberton.h"
#include <stdio.h>
/**
  *print_array - prints n elements of an array of integers
  *Return: nothing
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%i, ", a[i]);
	}
	printf("%i \n", a[n - 1]);
}

