#include <stdio.h>
#include "1-main.c"

/**
 * main - alphabet
 * Return: 0
 */

int main(void)
{
	char variable;

	for (variable = 'a'; variable <= 'z'; variable++)
		putchar(variable);

	putchar('\n');

	return (0);
}
