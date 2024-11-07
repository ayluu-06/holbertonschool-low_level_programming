#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * @a: 
 *
 */

void print_diagsums(int *a, int size)
{
	int p = 0;
	int s = 0;
	int i;

	for (i = 0; i < size * size; i = i + size + 1)
	{
		p += a[i];
	}
	for (i = 0; i < size * size - 1; i = i + size - 1)
	{
		s += a[i];
	}
	printf ("%d, %d\n", p, s);
}
