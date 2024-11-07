#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: characters
 * Return: s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	char *i = s;
	char *save;

	while (*i)
	{
	save = accept;

		while (*save)
		{
			if (*i == *save)
			{
				return (i);
			}
		save++;
		}
	i++;
	}
	return (NULL);
}
