#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer
 * @accept: pointer
 * Return: integer
 */
 unsigned int _strspn(char *s, char *accept)
 {
       int i, j, k;

       while (s[i] != '\0')
       {
              for (j = 0; accept[j] != '\0'; j++)
              {
                     if (s[i] == accept[j])
                     {
                            k = k + 1;
                            break;
                     }

              }
              if (accept[j] == '\0')
              {
                     break;
              }
              i++;
       }
       return (k);
}