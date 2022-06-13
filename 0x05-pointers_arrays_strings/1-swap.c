#include "main.h"

/**
 *  swap_int   - the function that swaps the value of two integers
 *  @a: the pointer being tested
 *  @b: the pointer being tested
 *  Return: Always 0 success
 */

void swap_int(int *a, int *b)
{
	int xant;

	xant = *a;
	*a = *b;
	*b = xant;
}

