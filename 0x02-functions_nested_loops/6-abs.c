#include "holberton.h"

/**
  *_abs - convert to abs
  *Return: 0 when success
*/

int _abs(int i)
{
	if (i < 0)
	{
		i = i * -1;
	}
	else
	{
		i = i;
	}
	return (i);
}

