#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer to string
 * Return: string
 */

char *_strdup(char *str)
{
	int i;
	int lenght = 0;
	char *mal;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			lenght += 1;
		}

		mal = (char *)malloc((lenght + 1) * sizeof(char));

		if (mal == NULL)
		{
			return (NULL);
		}
		for (i = 0; i <= lenght; i++)
			mal[i] = str[i];
	}
	return (mal);
}

