#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - the function that allocates memory using malloc
 * @b: the letter being tested
 * Return: Always 0 success
*/

void *malloc_checked(unsigned int b)
{

	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}

