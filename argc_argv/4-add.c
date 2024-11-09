#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - fun
 * @argc: v
 * @argv: v
 * Return: wiud
 */

int main(int argc, char *argv[])
{
	int add = 0, num1, num2;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (num1 = 1; num1 < argc; num1++)
	{
		for (num2 = 0; argv[num1][num2] != '\0'; num2++)
		{
			if (!isdigit(argv[num1][num2]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[num1]);
	}

	printf("%d\n", add);
	return (0);
}
