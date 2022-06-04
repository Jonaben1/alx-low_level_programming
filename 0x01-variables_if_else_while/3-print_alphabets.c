#include <stdio.h>
/**
 *  main - This also generates random number
 *  to work.
 *  Description: The main.c will print out lowercase letters
 *  Return: Always(0) Success
*/
int main(void)
{
	int x, y;

	x  = 'a';
	while (x <= 'z')
	{
		putchar(x);
		x++;
	}

	y = 'A';
	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}
	return (0);
}

