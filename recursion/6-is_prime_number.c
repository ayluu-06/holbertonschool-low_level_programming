#include "main.h"

/**
 * aux - function
 * @n: num
 * @i: var
 * Return: n, i
 */

int aux(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n != i && n % i == 0)
	{
		return (0);
	}
	else if (n == i && n % i == 0)
	{
		return (1);
	}
	return (aux(n, i + 1));
}

/**
 * is_prime_number - function
 * @n: num
 * Return: n
 */

int is_prime_number(int n)
{
	return (aux(n, 2));
}
