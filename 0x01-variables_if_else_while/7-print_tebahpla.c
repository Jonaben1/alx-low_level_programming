#include <stdio.h>

/**
 *  main - The stdio.h is to enable putchar to work.
 *  Description:  The main.c will print out lower letters
 *  Return: Always(0) Success
*/
int main(void)
{
	int i;

	i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}

