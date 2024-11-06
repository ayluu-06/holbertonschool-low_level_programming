#include "main.h"

/**
 * _memcpy - function that copies n bytes from src to dest
 * @n: number of bytes to copie from area src
 * @src: memory area where the bytes are gonna be copied
 * @dest: destiny area to where the bytes are gonna be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = src;

	while (n > 0)
	{
		*p++ = *src++;
		n--;
	}
	return (dest);
}
