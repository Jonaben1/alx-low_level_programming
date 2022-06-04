#include <stdio.h>

/**
 *  main - The stdio.h is to enable putchar
 *  to work.
 *  Description -  The main.c will print out lower case
 *  Return: Always(0) Success
*/
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	return (0);
}

