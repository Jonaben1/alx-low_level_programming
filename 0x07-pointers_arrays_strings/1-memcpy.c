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
	int i:

	char *src_char = (char *)src;
	char *dest_char = (char *s)dest;

	for (i = 0; i < n; i++)
	{
		dest_char[i] = src_char[i];
	}
	return (dest);
}

