#include "main.h"

/**
 *  _strncat - the function that concat two strings
 *  @dest: the first par being tested
 *  @src: the second par being tested
 *  @n: the third par being tested
 *  Return: Always 0 success
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
