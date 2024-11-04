#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: pointer
 * Return: new strign
 */

char *string_toupper(char *str)
{
	char *org = str;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str -= 32;
		}
	str++;
	}
	return (org);
}
