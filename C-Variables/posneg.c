#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *This is a practice session
 * main - Entry point of program
 * return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
		printf("%d is greater than 0 and is positive\n", n);
	else if(n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d zero\n", n);
	return (0);
}
