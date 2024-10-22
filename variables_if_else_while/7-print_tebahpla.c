#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - alphabet
 * Return: 0
 */

int main(void)
{
	char vari;

	for (vari = 'z'; vari >= 'a'; vari--)
		putchar(vari);

	putchar('\n');
	return (0);
}
