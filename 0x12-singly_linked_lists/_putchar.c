#include <unistd.h>
/**
 * _putchar - a function that prints a character
 * @c: the character being tested
 * Return: Always 0 success
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
