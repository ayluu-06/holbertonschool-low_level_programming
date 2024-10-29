#include "main.h"

/**
 * more_numbers - print 0-14
 *
 */

void more_numbers(void)
{
	int numi;

	for (numi = 0; numi <= 14; numi++)
	{
		if (numi > 9)
		{
			_putchar((numi / 10) + '0');
			_putchar((numi % 10) + '0');
		}
		else
		{
			_putchar(numi + '0');
		}
	}
}
