#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string where to look for the substring
 * @needle: substring
 * Return: needle or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *i;
	char *p;

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack)
	{

		i = needle;
		if (*haystack == *i)
		{
			p = haystack;
			while (*haystack && *i && *haystack == *i)
			{
				haystack++;
				i++;
			}

			if (*i == '\0')
			{
				return (p);
			}
		}

		haystack++;
	}
	return (NULL);
}
