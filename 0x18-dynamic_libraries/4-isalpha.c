#include "main.h"

/**
 * _isalpha - a function that checks for alphabet letters
 * @c: the character being tested
 * Return: Akways 0 success
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
	return (0);
}

