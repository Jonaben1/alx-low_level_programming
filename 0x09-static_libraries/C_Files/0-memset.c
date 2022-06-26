#include "main.h"

/**
 *  _memset - a function that fills memory with a constant byte
 *  @s: the pointer being tested
 *  @b: the letter being tested
 *  @n: the letter being tested
 *  Return: Always 0 success
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

        char *z = (char *) s;

        for (i = 0; i < n; i++)
        {
                z[i] = b;
        }
	return (s);
}

