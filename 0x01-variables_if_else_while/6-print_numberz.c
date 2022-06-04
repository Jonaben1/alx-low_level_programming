#include <stdio.h>
/**
* main - prints all the numbers of base 16 in lowercase
*
* Description: The numbers are all single digits
* Return: Always(0) Success
*/
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		putchar(i);
		i++;
	}

	putchar('\n');

	return (0);
}

