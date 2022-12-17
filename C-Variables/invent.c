#include <stdio.h>
/**
 * main - print different combination of two digits
 * return: 0 if succuess 
 */

int main(void)
{

	int a, b;

	for(a = 48; a <= 56; a++)
{	
		for(b =49; b <= 57; b++)
		{
			if (a >= b)
			{
				continue;
			}
			
		putchar(a);
		putchar(b);

		if (a == 56 && b == 57)
		{
			break;
		}
			
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
}
putchar('\n');
return (0);
}
