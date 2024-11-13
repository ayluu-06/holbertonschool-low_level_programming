#include "main.h"

/**
 * create_array - creates an array of chars,specific char
 * @size: array size
 * @c: char
 * Return: p
 */

char *create_array(unsigned int size, char c)
{
	char *pointer;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		pointer = (char *)malloc(size * sizeof(char));

		if (pointer == NULL)
		{
			return (NULL);
		}

		for (i = 0; i < size; i++)
			pointer[i] = c;
	}
	return (pointer);
}
