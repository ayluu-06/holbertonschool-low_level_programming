#include "main.h"

/**
 * cap_string - cap
 * @str: string
 * Return: str
 */

char *cap_string(char *str)
{
	int uper = 1;
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		switch (str[c])
		{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			case '\n':
			case ' ':
			case '\t':
				uper = 1;
				break;
			default:
				if (str[c] >= 'a' && str[c] <= 'z' && uper)
				{
					str[c] = str[c] - 'a' + 'A';
				}
					uper = 0;
					break;
		}
	}
	return (str);
}
