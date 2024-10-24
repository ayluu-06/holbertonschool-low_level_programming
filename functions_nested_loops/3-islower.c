#include "main.h"

/**
 * _islower - lower
 * Return: return 1 if lower, return 0 if not lower
 * @c: variable
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
