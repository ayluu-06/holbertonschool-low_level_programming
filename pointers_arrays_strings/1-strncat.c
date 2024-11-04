#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: pointer
 * @src: pointer
 * @n: var
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr)
	{
		ptr++;
	}
	while (n > 0 && *src)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	*ptr = '\0';
	return dest;
}
