#include "main.h"
/**
* print_sign - a function that prints the sign of a number
* @k: number input
* Return: 1 prints '+' if n > 0, 0 prints '0' if n = 0, -1 prints '-' if n < 0
*/
int print_sign(int k)
{
	if (k > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (k == 0)
	{
		_putchar ('0');
		return (0);
	}
	else if (k < 0)
	{
		_putchar ('-');
		return (-1);
	}
	return (0);
}

