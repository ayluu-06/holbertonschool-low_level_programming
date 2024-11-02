#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: pointer
 * @src: pointer
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; src[c]; c++)
	{
		dest[c] = src[c];
	}
		dest[c] = '\0';
	{
		return (dest);
	}
}
