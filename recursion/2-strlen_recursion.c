#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to know its lenght
 * Return: jnclijaskb
 */

int _strlen_recursion(char *s)
{
	int count;

	if (*s == '\0')
	{
		return (0);
	}
	count = _strlen_recursion(s + 1);
	count++;
	return (count);
}
