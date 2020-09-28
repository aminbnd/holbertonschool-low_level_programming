#include "holberton.h"
/**
  *swap_int - swaps the values of two int
  *@a: integer
  *@b: integer
  *Return: void
  */
void swap_int(int *a, int *b)
{
	int empty;

	empty = *a;
	*a = *b;
	*b = empty;
}
