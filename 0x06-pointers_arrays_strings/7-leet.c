#include "holberton.h"
/**
  **leet - Encodes a string into 1337
  *@a: pointer
  *Return: pointer
  */
char *leet(char *a)
{
	char *l = "aeotl";
	char *u = "AEOTL";
	char *leet = "43071";
	int i, j;

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; leet[j] != '\0'; j++)
		{
			if (a[i] == l[j] || a[i] == u[j])
			{
				a[i] = leet[j];
			}
		}
	}
	return (a);
}

