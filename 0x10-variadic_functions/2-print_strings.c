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
	for (i = 0; i < n - 1; i++)
	{
		s = va_arg(valist, char*);
		if (!s)
			s = "(nil)";
		else
			printf("%s", s);
		if (separator)
			printf("%s", separator);
	}
	s = va_arg(valist, char*);
	if (!s)
		s = "(nil)";
	else
		printf("%s\n", s);
	va_end(valist);
}
