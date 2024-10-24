#include "main.h"

/**
 *print_alphabet_x10 - print x10 alph
 * Return: 0
 */

void print_alphabet_x10(void)

{
		char variable;
		int alp;
	for (alp = 0; alp <= 9; alp++)
	{
	for (variable = 'a'; variable <= 'z'; variable++)
		_putchar(variable);
	_putchar('\n');
	}
}
