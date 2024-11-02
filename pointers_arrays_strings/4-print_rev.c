#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: prints reverse
 */

void print_rev(char *s)
{
	int len = 0;
	int v;

	while (s[len] != '\0')
	{
		len++;
	}
	for (v = len - 1; v >= 0; v--)
	{
		_putchar(s[v]);
	}
	_putchar('\n');
}
