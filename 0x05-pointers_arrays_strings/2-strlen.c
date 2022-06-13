#include "main.h"
/**
 *   _strlen  -  the function that returns the length of a string
 *  @s: The letter being tested
 *  Return: Always 0 success
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
