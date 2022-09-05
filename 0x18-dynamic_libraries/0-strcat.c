#include "main.h"

/**
 * _strcat - a function that concatenate two strings
 * @dest:  pointer used
 * @src: pointer used
 * Return: always 0 success
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
		j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
