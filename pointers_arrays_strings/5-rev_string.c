#include "main.h"

/**
 *
 *
 */

void rev_string(char *s)
{
	char *first = s;
	char *last = s;
	char path;

	while (*last != '\0')
		last++;
	last--;

	while (first < last)
	{
		path = *first;
		*first = *last;
		*last = path;

		first++;
		last--;
	}
}