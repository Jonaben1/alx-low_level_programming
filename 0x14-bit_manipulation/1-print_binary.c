#include <stdio.h>
#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: the character used
 * Return: Always 0 success
*/

void print_binary(unsigned long int n)
{
	unsigned int mask=32768;

	while(mask > 0)
	{
		if((n & mask) == 0 )
			_putchar('0');
		else
			_putchar('1');
		mask = mask >> 1;
	}
}
