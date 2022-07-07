#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints name
 * @name: the name to be printed
 * @f: a pointer function to be called
 * Return: Always 0 success
*/

void print_name(char *name, void (*f)(char *))
{
	if ((name == NULL) || (f == NULL))
		return;
	f(name);
}

