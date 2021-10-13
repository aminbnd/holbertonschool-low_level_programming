#include "holberton.h"

/**
 * oneDigitResultLayout - prints one digit multiplication result layout
 * Return: void
 */
void oneDigitResultLayout(void)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
}

/**
 * oneDigitResult - prints one digit multiplication result
 * @res: int, the multiplication result
 * Return: void
 */

void oneDigitResult(int res)
{
	_putchar('0' + res);
}


/**
 * twoDigitsResultLayout - prints two digits multiplication result layout
 * Return: void
 */
void twoDigitsResultLayout(void)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
}


/**
 * twoDigitResult - prints otwo digits multiplication result
 * @res: int, the multiplication result
 * Return: void
 */

void twoDigitResult(int res)
{
	_putchar('0' + (res / 10));
	_putchar('0' + (res % 10));
}

/**
 * threeDigitsResultLayout - prints three digits multiplication result layout
 * Return: void
 */
void threeDigitsResultLayout(void)
{
	_putchar(',');
	_putchar(' ');
}


/**
 * threeDigitResult - prints three digits multiplication result
 * @res: int, the multiplication result
 * Return: void
 */

void threeDigitResult(int res)
{
	_putchar('0' + res / 100);
	_putchar('0' + (res / 10) % 10);
	_putchar('0' + res % 10);
}