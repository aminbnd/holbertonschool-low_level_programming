#include "holberton.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: integer (number of lines)
 * Return: void
 */
void print_diagonal(int n)
{
	int height, width;

	if (n <= 0)
		_putchar('\n');
	else
	for (height = 0; height < n; height++)
	{
		for (width = 0; width < height; width++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
