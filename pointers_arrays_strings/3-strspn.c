#include "main.h"

/**
 * _strspn - function that prints
 * @s: initial segment
 * @accept: characters at the beginning of s
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	char count = 0;
	const char *p;

	while (*s)
	{
		for (p = accept; *p; p++)
		{
			if (*s == *p)
			{
				break;
			}
		}
		if (!*p)
		{
			return (count);
		}
		count++;
		s++;
	}
	return (count);
}
