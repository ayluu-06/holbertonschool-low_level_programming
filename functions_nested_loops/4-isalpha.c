#include "main.h"
#include<ctype.h>
/**
 * _isalpha - print
 * Return: return 1 if lower, return 0 if not lower
 * @c: variable
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
