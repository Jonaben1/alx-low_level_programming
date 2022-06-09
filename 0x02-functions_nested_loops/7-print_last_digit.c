#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @k: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int k)
{
	int p;

	p = (k % 10);

	if (p < 0)
	{
		p = (-1 * p);
	}

	_putchar(p + '0');
	return (p);
}
