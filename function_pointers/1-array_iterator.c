#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: pointer to array
 * @size: of the array
 * @action: function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL || action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
	else
	{
		return;
	}
}
