#include "holberton.h"
/**
  *times_table - Prints the x times table
  * return: void
  */

void times_table(void)
{
	int i, j, k, l, m;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		_putchar(',');

		for (j = 1; j < 10; j++)
		{
			k = j * i;
			l = k / 10;
			m = k % 10;

			if (k < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + m);
			}
			else
			{
				_putchar(' ');
				_putchar('0' + l);
				_putchar('0' + m);
			}
			if (j < 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
