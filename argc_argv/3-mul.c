#include <stdio.h>
#include <stdlib.h>
/**
 * main - fun
 * @argc: v
 * @argv: v
 * Return: ixno
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int m = atoi(argv[1]);
		int m2 = atoi(argv[2]);

		printf("%d\n", m * m2);
	}
	return (0);
}

