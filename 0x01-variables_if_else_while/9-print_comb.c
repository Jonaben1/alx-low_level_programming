#include <stdio.h>
/**
 *  main - To print out lowercase letters
 *  Description - The main.c will exlude two letters
 *  Return: Always(0) Success
*/
int main(void)
{
	int x;

	x  = 0;
	while (x < 10)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return(0);
}
