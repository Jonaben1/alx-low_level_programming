#include "main.h"

/**
 *  _strcat - function that concatenate two strings
 *  @dest: being the first par tested
 *  @src: being the second par tested
 *  Return: Always 0 success
*/

char *_strcat(char dest, char src)
{
	char *star = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (star);
}
