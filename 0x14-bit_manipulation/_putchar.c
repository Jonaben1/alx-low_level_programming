#include <unistd.h>

/**
 * _putchar - a function that prints a given character
 * @c: the character used
 * Return: Always 0 success
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

