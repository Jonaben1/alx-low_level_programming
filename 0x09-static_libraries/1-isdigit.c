#include "main.h"

/**
 * _isdigit - a function that checks for digits (0-9)
 * @c: the letter being tested
 * Return: Always 0 success
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
