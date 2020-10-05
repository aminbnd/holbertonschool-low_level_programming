#include "holberton.h"
/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: pointer to string to be "scanned"
 *@accept: pointer to string containing characters to be matched
 *Return: pointer to char in s that matchs one of the characters of accept, else NULL
 */
char *_strpbrk(char *s, char *accept)
{
        int i = 0;
        int j;

        while (s[i] != '\0')
        {
                for (j = 0; accept[j] != '\0'; j++)
                {
                        if (s[i] == accept[j])
                        {
                                return (s + i);
                        }
                }
                i++;
        }
        return (0);
}
