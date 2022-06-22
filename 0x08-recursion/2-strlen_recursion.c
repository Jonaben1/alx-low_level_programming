#include "main.h"
/**
 *  _strlen_recursion - the function that returns the length of a string
 *  @s: the pointer being tested
 *  Return: Always 0 success
*/

int _strlen_recursion(char *s)
{
	int i;
	i = 0;

	if (s[i] == '\0')
		return (i);
	else
		return (1 + _strlen_recursion(&s[i +1]));

}
