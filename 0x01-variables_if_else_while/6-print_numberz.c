#include <stdio.h>
/**
 *  main - to print out numbers to 9
 *  Description: The main function will print out the numbers
 *  Return: Always(0) Success
*/
int main(void)
{	int i;
	i = 0;

	while (i < 10)
{		putchar(i);
		++i;
	}
	putchar('\n');
	return (0);
}
