#include "main.h"
/**
 *  print_most_numbers - prints numbers from 0-9 except 2 and 4
 *  Return: Always 0 success
*/


void print_most_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		if (x != '2' && x != '4')

			_putchar(x);

	}
	_putchar('\n');
}
