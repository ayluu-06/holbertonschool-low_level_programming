#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string where to look for the substring
 * @needle: substring
 * Return: needle or NULL
 */

char *_strstr(char *haystack, char *needle)
{

	int i = 0, j = 0;

	while (haystack[i])
	{
		j = 0;
		while (needle[j])
		{
			if (haystack[i] == needle[j])
			{
				return (needle);
			}
			j++;
		}
	i++;
	}
	return (NULL);
}
