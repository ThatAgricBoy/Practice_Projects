#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 * return: (0)
 *Practice
 */

int main(void)
{
	int n;
	int lastdig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdig = n % 10;
	printf("Last digit of %i is %i and is ", n, lastdig);
	if (lastdig > 5)
		printf("is greater than 5\n");
	else if (lastdig == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");
	return (0);
}
