#include "main.h"

/**
 *  _memcpy -  the function that copies memory area
 *  @dest: the pointer being tested
 *  @src: the pointer being tested
 *  @n: the letter being tested
 *  Return: Always 0 success
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	char *src_char;
	char *dest_char;

	src_char = (char *)src;
	dest_char = (char *)dest;

	for (i = 0; i < n; i++)
	{
		dest_char[i] = src_char[i];
	}
	return (dest);
}

