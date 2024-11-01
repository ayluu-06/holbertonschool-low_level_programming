#include "main.h"

/**
 * _puts - print a string
 * @str: pointer
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
