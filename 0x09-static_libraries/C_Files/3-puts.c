#include "main.h"

/**
 * _puts - a function that prints a string
 * @s: the character being tested
 * Return: Always 0 success
*/

void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	 	_putchar(s[i]);
	_putchar('\n');
}

