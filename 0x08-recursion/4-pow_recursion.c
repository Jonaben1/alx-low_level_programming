#include "main.h"

/**
 * _pow_recursion - The function that returns a number raised to a power
 * @x: The letter being tested
 * @y: The letter being tested
 * Return: Always 0 success
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y != 0)
		return (x * _pow_recursion(x, y-1));
	else
		return (1);
}
