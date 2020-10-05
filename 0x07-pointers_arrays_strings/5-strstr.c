#include "holberton.h"
/**
 * _strstr -  locates a substring
 * @haystack: pointer to the string to be "scanned"
 * @needle: substring to be found 
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
        int i, j;

        for (i = 0; haystack[i]; i++)
        {
                j = 0;
                while (needle[j] && haystack[i + j] == needle[j])
                j++;
                if (!needle[j])
                return (&haystack[i]);
        }
        return (0);
}
