#include "main.h"
/**
 *  _puts_recursion - the function that prints a string
 *  @s the pointer being used
 *  Return: Always 0 success
*/

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		_puts_recursion(&s[i + 1]);
	}
	else
	_putchar('\n');
}
