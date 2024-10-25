#include "main.h"
/**
 * jack_bauer - print a jack day
 * Return: hours and minutes
 */

void jack_bauer(void)
{
	char h, m;

	for (h = 0; h < 24; h++)
	{

		for (m = 0; m <= 59; m++)
		{
			_putchar ((h / 10) + '0');
			_putchar ((h % 10) + '0');
			_putchar (':');
			_putchar ((m / 10) + '0');
			_putchar ((m % 10) + '0');
			_putchar ('\n');
		}
	}
}
