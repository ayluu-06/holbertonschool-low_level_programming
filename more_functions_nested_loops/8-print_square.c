#include "main.h"

/**
 * print_square - prints #
 * @size: size of square
 */

void print_square(int size)
{
	int n, ling;

	if (size <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (n = 1; n <= size; n++)
		{
			for (ling = 1; ling <= size; ling++)
			{
				_putchar ('#');
			}
		_putchar ('\n');
		}
	}
}
