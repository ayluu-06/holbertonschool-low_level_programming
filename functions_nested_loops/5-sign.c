#include "main.h"

/**
 * print_sign - printing zero
 * Return: 1 if greater, 0 if zero, -1 if less 
 **/

int print_sign(int n)
{
	if (n > 0) {
		return (1);
	} else if (n == 0) {
		return (0);
	} else {
		return (-1);
	}
}
