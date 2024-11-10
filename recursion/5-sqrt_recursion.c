#include "main.h"

/**
 * function_aux - returns the natural square root of a number
 * @n: x number
 * @i: aux var
 * Return: square root
 */

int function_aux(int n, int i)
{
	if (n < 0 || n == 0)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (function_aux(n, i + 1));
}

/**
 * _sqrt_recursion - function
 * @n: x number
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	return (function_aux(n, 1));
}
