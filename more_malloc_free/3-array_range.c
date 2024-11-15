#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimo
 * @max: maximo
 * Return: ary
 */

int *array_range(int min, int max)
{
	int i;
	int *ary;

	if (min > max)
	{
		return (NULL);
	}
	ary = malloc((max - min + 1) * sizeof(int));
	if (ary == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < max - min + 1; i++)
	{
		ary[i] = min + i;
	}
	return (ary);
}

