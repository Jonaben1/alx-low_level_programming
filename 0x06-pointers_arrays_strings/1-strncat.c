#include "main.h"

/**
 *  _strncat - the function that concat two strings
 *  @dest: the first par being tested
 *  @src: rhe second par being tested
 *  Return: Always 0 success
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, co;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (co = 0; co < n; co++)
	{
		dest[i + co] = src[co];
		if (src[co] == '\0')
			co = n;
	}

	return (dest);
}
