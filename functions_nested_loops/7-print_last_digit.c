#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: integer
 * Return: last digit of integer
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last = -last;
	_putchar (last + '0');
	return (last);
}
