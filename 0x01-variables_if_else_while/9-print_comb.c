#include <stdio.h>
/**
 *  main - To print out lowercase letters
 *  Description - The main.c will exlude two letters
 *  Return: Always(0) Success
*/
int main(void)
{
	int x;

	x  = '0';
	while (x <= '9')
	{
		putchar(x);
		putchar(',');
		putchar(' ');
		x++;
	}
	putchar('\n');
	return (0);
}
