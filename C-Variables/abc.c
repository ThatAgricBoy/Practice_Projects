#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
		if (b != 'y' && b != 'r')
			putchar(b);
	putchar('\n');
	return (0);
}
