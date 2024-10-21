#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - funcion
 * Return: 0
 */

int main(void)
{
	int n, x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	printf("Last digit of %d is ", n);
	if (x > 5)
		printf("%d and is greater than 5\n", x);
	else if (x == 0)
		printf("%d and is 0\n", x);
	else
		printf("%d and is less than 6 and not 0\n", x);
	return (0);
}
