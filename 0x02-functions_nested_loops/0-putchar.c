#include "main.h"
/**
 * main  - Entry point funct to print
 *
 * Return: On success 1.
 *
 */

int main(void)
{
	int *b  = "Main";


	while (*b)
	{
		_putchar(*b);
		*b++;
	}
	_putchar('\n');
	return (0);
}
