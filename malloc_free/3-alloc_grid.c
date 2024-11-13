#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width:
 * @height:
 * Return:
 */

int **alloc_grid(int width, int height)
{
	int *ptr
	if (width <= 0 || height <= 0)
	{
		return (NULL)
	}
	ptr = (int **)malloc(height * sizeof(int *));
	if (ptr == NULL)
	{
		return (NULL);
