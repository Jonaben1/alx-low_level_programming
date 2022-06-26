#include "main.h"

/**
 * _strcpy - a function that copies string pointed to by src
 * @src: copies from
 * @dest: copies to
 * Return: Always 0 success
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}

