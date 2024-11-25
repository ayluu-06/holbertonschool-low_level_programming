#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: sep
 * @n: n
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argu;
	unsigned int i;
	char *j;

	va_start(argu, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(argu, char *);
		if (j == NULL)

			printf("(nil)");

		else
			printf("%s", j);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}

	}
	va_end(argu);
	printf("\n");
}
