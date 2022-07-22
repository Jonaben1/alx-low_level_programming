#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - a function that converts a binary to an unsigned int
 * @b: pointer used
 * Return: Always 0 success
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		val <<= 1;
		val += b[i] - '0';
		i++;
	}
	return (val);
}
