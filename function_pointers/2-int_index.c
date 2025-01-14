#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array
 * @size: number of elements
 * @cmp: pointer to fun
 * Return: i
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == 0 || size == 0 || cmp == 0)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);

}
