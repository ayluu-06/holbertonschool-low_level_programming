#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - alphabet
 * Return: 0
 */

int main(void)
{
	int numi;

	for (numi = '0'; numi <= '9'; numi++)
	{
		putchar(numi);

		if (numi != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}