#include "main.h"
#include <stdio.h>
/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: the pointer used
 * @index: the character used
 * Return: Always 0 success
*/
int clear_bit(unsigned long int *n, unsigned int index)
{

	unsigned int set;

	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);
	set = 1 << index;
	set = ~set;
	*n = (*n & set);
	return (1);
}

