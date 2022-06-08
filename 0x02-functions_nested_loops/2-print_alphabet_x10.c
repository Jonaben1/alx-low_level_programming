#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 * main - a function that uses putchar
 * Return: x10 a-z
 */
int main(void)
{
	int leta;
	int leta2;


	for (leta = 0; leta <= 9; leta++)
	{
		for (leta2 = 'a'; leta2 <= 'z'; leta2++)
		{
			_putchar(leta2);
		}
		_putchar('\n');
	}
}
