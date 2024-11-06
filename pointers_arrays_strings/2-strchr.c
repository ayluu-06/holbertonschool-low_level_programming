#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: character o find
 * Return: null
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
