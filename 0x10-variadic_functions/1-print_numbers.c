#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: integer (variabl number of arguments)
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	/* initializing valist*/
	va_start(valist, n);
	/* accessing all the arguments*/
	for (i = 0; i < n; i++)
	{
		if(separator && i != n -1)
			printf("%d%s", va_arg(valist, const unsigned int), separator);
		else
			printf("%d", va_arg(valist, const unsigned int));
	}
	va_end(valist);
	printf("\n");
}
