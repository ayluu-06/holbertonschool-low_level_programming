#include "main.h"

/**
 * puts_half - prints
 * @str: pointer
 */

void puts_half(char *str)
{
	int c, length = 0;
	int half;

	for (c = 0; str[c] != '\0'; c++)
	{
		length++;
	}
	half = (length + 1) / 2;

	for (c = half; c < length; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
