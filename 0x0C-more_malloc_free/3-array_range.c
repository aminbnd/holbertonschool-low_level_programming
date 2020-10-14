#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: integer
 * @max: integer
 * Return: pointer to an array
 */
int *array_range(int min, int max)
{
	int *a;
	int i;
	int j = 0;

	if (min > max)
		return (NULL);
	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
		return (NULL);
	i = min;
	while (i <= max)
	{
		a[j] = i;
		i++;
		j++;
	}
	
	return (a);
}
