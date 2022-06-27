#include "main.h"

/**
 * _isupper - a function that checks for uppercase letter
 * @c: the letter being tested
 * Return: Always 0 success
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
	return (0);
}

