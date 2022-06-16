#include "main.h"
/**
 *  reverse_array - function that reverses the content of an array of integers
 *  @a: being the letter tested
 *  @n: being the letter tested
 *  Return: Always 0 success
*/
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
