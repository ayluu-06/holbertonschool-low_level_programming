#include <stdio.h>

/**
 * main - function  that prints its name
 * @argv: pointer
 * @argc: nada
 * Return: name
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s", argv[0]);
	printf("\n");
	return (0);
}
