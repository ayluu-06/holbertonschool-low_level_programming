#include "main.h"

/**
 * _memset - function
 * @n: numero de bytes que hay que llenar
 * @s: puntero que apunta al area de memoria
 * @b: byte constante que hay que dirigir con el pointer al area de memoria
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
	n--;
	*p++ = b;
	}
	return (s);
}
