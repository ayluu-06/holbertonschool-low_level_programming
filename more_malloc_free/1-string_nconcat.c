#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: s1
 * @s2: s2
 * @n: n
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, lons1 = 0, lons2 = 0;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		lons1++;
	}
	for (j = 0; s2[j] != '\0' && j < n; j++)
	{
		lons2++;
	}
	ptr = malloc(sizeof(char) * (lons1 + lons2 + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < lons1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < lons2; j++)
	{
		ptr[i + j] = s2[j];
	}
	ptr[i + j] = '\0';
	return (ptr);
}
