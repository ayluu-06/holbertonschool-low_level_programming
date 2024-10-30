#include "main.h"

/**
 * print_triangle - prints tri
 * @size: variable
 */

void print_triangle(int size)
{
	int n, space;

	if (size < 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (n = 1; n <= size; n++)
		{
			for (space = 1; space <= size; space++)
			{
				if (space <= size - n)
				{
					_putchar (' ');
				}
				else
				{
				_putchar('#');
				}
			}
		_putchar ('\n');
		}
	}
}
