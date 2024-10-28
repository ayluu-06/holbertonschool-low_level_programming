#include "main.h"

/**
 * times_table - print 9 time table
 *
 */

void times_table(void)
{
	int h, v, res;

	for (h = 0; h <= 9; h++)
	{
		for (v = 0; v <= 9; v++)
		{
			res = h * v;
			if (res > 9)
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else
			{
				if (v != 0)
				{
					_putchar(' ');
				}
				_putchar(res + '0');
			}
			if (v != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
