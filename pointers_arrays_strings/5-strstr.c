#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string where to look for the substring
 * @needle: substring
 * Return: needle or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			return (needle);
		}
	haystack++;
	}
	return (NULL);
}
