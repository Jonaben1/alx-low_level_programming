#include "main.h"

/**
 * a function that finds the length of a string
 * &s: character being tested
 * Return: Always 0 success
*/

int _strlen(char *s)
{
	int i;
	while (s[i] != '\0')
		i++;
	return (i);
}
