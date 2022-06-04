#include <stdio.h>
/**
 *  main - To print out lowercase letters
 *  Description - The main.c will exlude two letters
 *  Return: Always(0) Success
*/
int main(void)
{
	int x;

	x = 'a';
	while (x <= 'z')
	{
		if (x != 'e' && x != 'q')
			putchar(x);
		x++;
	}
	return (0);
}

