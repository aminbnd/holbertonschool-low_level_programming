#include "holberton.h"
/**
 *_memcpy - copies a memory area
 *@dest: pointer
 *@src: pointer
 *@n: unsigned integer
 *Return: a pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[j];
		for (j = 0; j < n; j++)
		{
			dest[j] = src[j];
		}
	}
	return (dest);
}
