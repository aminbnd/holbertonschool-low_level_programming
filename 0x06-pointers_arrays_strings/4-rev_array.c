#include "holberton.h"
/**
  *reverse_array - reverses a content of an array
  *@a: pointer
  *@n: integer
  *Return: void
  */
void reverse_array(int *a, int n)
{
	int i, j;
	
	i = 0;
	while (i < n / 2)
	{
		j = a[i];
		a[i] = a[n - i -1];
		a[n - i -1] = j;
		i++;
	}
}

