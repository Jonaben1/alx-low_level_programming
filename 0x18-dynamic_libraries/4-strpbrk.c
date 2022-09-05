#include <stdio.h>
#include "main.h"

/**
 *  _strpbrk - the function that searches the string for any of a set of byte
 *  @s: the pointer being tested
 *  @accept: the pointer being tested
 *  Return: Always 0 success
*/

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
		s++;
	while (*accept != '\0')
		accept++;
	return (0);

}
