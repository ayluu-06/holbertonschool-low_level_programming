#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: points to name string
 * @f: pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}
	if (f == NULL)
	{
		return;
	}
	f(name);
}
