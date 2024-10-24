#include "main.h"

/**
 * print_alphabet - imprimir
 * Return: 0
 */

void print_alphabet(void)
{
	char variable;

	for (variable = 'a'; variable <= 'z'; variable++)
		_putchar(variable);

	_putchar('\n');
}
