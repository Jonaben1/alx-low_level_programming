#include "main.h"

/**
 * _strcat - a function that concatenate two strings
 * @dest:  pointer used
 * @src: pointer used
 * Return: always 0 success
*/

char *_strcat(char *dest, char *src)
{
	char *star  = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
		*dest  = *src;
		dest++;
		src++;
	*dest  = '\0';
	return (star);
}

