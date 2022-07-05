#include <stdio.h>
#include "dog.h"

/**
 * print_dog - a function that prints a struct dog
 * @d: character used
 * Return: Always 0 success
*/


void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d -> name == NULL)
	{
		d -> name  = "(nil)";
	}
	if (d -> age <= 0)
		printf("Age: (nil)\n");

	if (d -> owner == NULL)
		d -> owner  = "(nill)";

	printf("Name: %s\n", d -> name);
	printf("Age: %.6f\n", d -> age);
	printf("Owner: %s\n", d -> owner);
}

