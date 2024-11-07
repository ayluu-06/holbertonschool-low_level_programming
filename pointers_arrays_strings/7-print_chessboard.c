#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: pointer
 *
 */

void print_chessboard(char (*a)[8])
{
	int rf;
	int rc;

	for (rf = 0; rf < 8; rf++)
	{
		for (rc = 0; rc < 8; rc++)
		{
			_putchar (a[rf][rc]);
		}
	_putchar('\n');
	}
}
