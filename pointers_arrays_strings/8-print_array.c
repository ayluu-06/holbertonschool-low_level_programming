#include "main.h"
#include <stdio.h>

/**
 * print_array - prints integer
 * @a: pointer
 * @n: number
 */

void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		printf("%d", a[c]);
		if (c < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
