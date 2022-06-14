#include "main.h"

/**
 * puts_half - prints half of the string
 *@str: string being tested
 *
 */

void puts_half(char *str)
{
	int ct, even, neg;

	neg = 0;

	for (ct = 0; str[ct] != '\0'; ct++)
	{
		neg++;
	}
	even = (neg/2);
	if ((ct % 2) == 1)
	{
		even = ((even + 1) / 2);
	}
	for (ct = even; str[ct] != '\0'; ct++)
	{
		_putchar(str[ct]);
	}

	_putchar('\n');
}
