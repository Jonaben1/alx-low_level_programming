#include <stdio.h>
/**
* main - prints all the numbers of base 16 in lowercase
*
* Description: The numbers are all single digits
* Return: Always(0) Success
*/
int main(void)
{
	int i, x;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		i++;
	}

	x = 'a';
	while (x <= 'f')
	{
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}

