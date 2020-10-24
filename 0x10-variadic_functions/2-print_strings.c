#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string between the strings
 * @n: unsigned integer (number of arguments)
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *s;

	/*initializing valist*/
	va_start(valist, n);
	/*accessing all the arguments of the function*/
	for (i = 0; i < n; i++)
	{
		s = va_arg(valist, char*);
		if (!s)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	va_end(valist);
	printf("\n");
}
