
#include <stdio.h>
/**
 *  main - The function to print out single digit numbers
 *  Description: The number must be less than 10
 *  Return: Always(0) Success
 */

int main(void)
{
	char i;

	i = '0';
	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
