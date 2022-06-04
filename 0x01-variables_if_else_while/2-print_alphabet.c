#include <stdio.h>
/**
 * main - to print out lower alphabet
 *
 * Description: To generate random numbers and execute
 * Return: Always(0) Success
*/
int main(void)
{
	int x;

	x  = 'a';
	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	return (0);
}

