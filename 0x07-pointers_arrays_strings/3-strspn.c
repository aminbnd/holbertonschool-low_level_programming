#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to string to be "scanned"
 * @accept: pointer to string containing characters to match
 * Return: integer, number of characters that match
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	int n = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				n = n + 1; /** "oleh" contains 4 characters while the output requires 5*/
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break; /** at the end of "oleh" = accept */
		}
		i++;
	}
	return (n);
}
