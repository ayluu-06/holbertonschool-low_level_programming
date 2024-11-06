#include "main.h"

/**
 * cap_string - cap
 * @str: string
 *
 */

char *cap_string(char *str)
{
	int uper = 1;

	for(int c = 0; str[c] != '\0'; c++)
	{	
		switch(str[c])
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
				if (str[c] >= 'a' && str[c] <= 'z' && c)
				{
					str[c] = str[c] - 'a' + 'A';
					uper = 0;
				break;
				}
		}
	}
	return(str);
}
