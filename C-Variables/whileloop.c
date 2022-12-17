#include <stdio.h>

/**
 * The while loop
 */

int main(void)
{
	char a = 'a';

	while(a <= 'z')
	{
		putchar(a);
		a++;
		putchar('\n');
	}
	return (0);

}
