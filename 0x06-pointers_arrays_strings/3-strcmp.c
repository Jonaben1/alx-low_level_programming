#include "main.h"

/**
 *  _strcmp - function to compares two strings
 *  @s1: being the first par tested
 *  @s2: being the second par tested
 *  Return: Always 0 success
*/

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
