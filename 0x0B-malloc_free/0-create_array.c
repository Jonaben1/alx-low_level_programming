#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * create_array - a function that  creates an areay of characters
 * and initializes it with a specific char
 * @size: character  being used
 * @c: character being used
 * Return: Akways 0 success
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;
	array  = malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}


