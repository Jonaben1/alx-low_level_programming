#include "main.h"
#include <stdio.h>
/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: the pointer used
 * @index: the character used
 * Return: Always 0 success
*/
int set_bit(unsigned long int *n, unsigned int index)
{

	if (n == NULL || (index > ((sizeof(unsigned long int) * 8) - 1)))
		return (-1);
	*n = (*n | (1 << index));
	return (1);
}

