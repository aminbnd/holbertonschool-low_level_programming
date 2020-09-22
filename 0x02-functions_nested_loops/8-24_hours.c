#include "holberton.h"
/**
  *jack_bauer - Prints minutes of a track
  *Return: void
  */
void jack_bauer(void)
{
	int a, b, c, d, e, f;

	for (a = 0; a < 24; a++)
	{
		b = a / 10;
		c = a % 10;

		for (d = 0; d < 60; d++)
		{
			e = d / 10;
			f = d % 10;

			_putchar('0' + b);
			_putchar('0' + c);
			_putchar(':');
			_putchar('0' + e);
			_putchar('0' + f);
			_putchar('\n');
		}
	}
}
