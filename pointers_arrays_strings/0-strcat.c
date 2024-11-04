#include "main.h"

/**
 * *_strcat - concatenates two strings.
 * @dest: dest
 * @src: source
 */

char *_strcat(char *dest, char *src)
{
	char *pt = dest;

	while (*pt)
	{
		pt++;
	}
	while (*src)
	{
		*pt = *src;
		pt++;
		src++;
	}
	*pt = '\0';
	return dest;
}
