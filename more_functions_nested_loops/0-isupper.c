#include "main.h"
#include <ctype.h>

/**
 * _isupper - print 1 if upperase and 0 if not
 * Return: 1 or 0
 * @c: variable
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
