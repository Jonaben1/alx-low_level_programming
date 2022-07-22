#include "main.h"

/**
 *  get_bit - a function that returns the value of a bit at a given time
 *  @n: character used
 *  @index: letter used
 *  Return: Always 0 success
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index) & 1;
	if (n == 0)
		return (-1);
	return (bit);
}
