#include "main.h"

/**
 * str_concat - concatenates two string
 * @s1: najn
 * @s2: hsad
 * Return: uhdiuewh
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *pointer;
	int k;

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
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	pointer = (char *)malloc((i + j + 1) * sizeof(char));

	if (pointer == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		pointer[k] = s1[k];
	}
	for (k = 0; k < j; k++)
	{
		pointer[i + k] = s2[k];
	}
	pointer[i + j] = '\0';

	return (pointer);

}
