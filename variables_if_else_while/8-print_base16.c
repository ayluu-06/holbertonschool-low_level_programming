#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - alphabet
 * Return: 0
 */

int main(void)
{
	int numi, let;

	for (numi = '0'; numi <= '9'; numi++)
		putchar(numi);
	for (let = 'a'; let <= 'f'; let++)
		putchar(let);
	putchar('\n');

	return (0);
}
