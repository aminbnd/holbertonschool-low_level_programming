#include "holberton.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: pointer
 * @b: character
 * @n: unsigned integer
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i, j;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
		for (j = 0; j < n; j++)
		{
			s[j] = b;
		}
	}
	return (s);
}
