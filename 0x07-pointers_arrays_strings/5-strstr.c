#include "holberton.h"
/**
 * *_strstr - locates a substring
 * @haystack: pointer to the string to be "scanned"
 * @needle: substring to be found
 * Return: pointer to the first occurence of the in the haystack string
 * of any of entire sequence specified in needle
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j + i] && haystack[i] == needle[j])
			{
				return (&haystack[i]);
			}
		}
	}
	return (0);
}

