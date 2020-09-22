#include "holberton.h"
/**
  *_isalpha - checks alpha (1) when true (0) otherwise
  *@c: integer
  *Return: 1 when true 0 otherwise
  */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
