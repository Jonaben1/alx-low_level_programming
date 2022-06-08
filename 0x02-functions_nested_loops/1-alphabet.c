#include "main.h"
/**
 *  main - a user-defined function
 *
 *  Description - To return the lowest letters of the alphabet
 *
 *  return: Always(0) Success
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');

}

