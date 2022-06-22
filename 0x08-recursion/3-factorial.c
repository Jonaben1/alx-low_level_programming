#include "main.h"

/**
 * factorial - the function that prints the
 * factorial of a number
 * @n: the letter being tested
 * Return: Always 0 success
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
