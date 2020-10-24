#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - performs the sum of all its parametres
 * @n: integer
 * Return: the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	/*initialize valist*/
	va_start(valist, n);
	/* access to all arguments of valist */
	for (i = 0; i < n; i++)
		sum += va_arg(valist, const unsigned int);
	/* free valist */
	va_end(valist);
	return (sum);
}
