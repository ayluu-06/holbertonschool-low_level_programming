#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: a
 * @argv: a
 * Return: num
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i = 0;

	while (i < argc)
	{
		i++;
	}
	printf("%d", i - 1);
	return (0);
}
