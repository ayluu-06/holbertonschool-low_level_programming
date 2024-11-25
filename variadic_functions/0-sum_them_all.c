#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all its parameters
 * @n: const
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int i = 0;
	unsigned int j;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	for (j = 0; j < n; j++)
	{
		i += va_arg(args, int);
	}
	va_end(args);
	return (i);
}
