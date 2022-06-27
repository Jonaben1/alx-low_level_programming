#include "main.h"

/**
 *  _strchr - the function that locates a character in a string
 *  @s: the pointer being tested
 *  @c: the letter being tested
 *  Return: Always 0 success
*/

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}
	} while (*s++);
	return (0);
}
