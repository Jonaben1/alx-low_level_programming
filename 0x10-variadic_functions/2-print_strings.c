#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings
 * @separator: the string to be printed
 * @n: the number of string
 * Return: Always 0 success
*/


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *sky;
	va_list tom;
	va_start(tom, n);

	for (i  = 0; i < n; i++)
	{
		sky = va_arg(tom, const char *);
		printf("%s", sky);
		if (i != (n -1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(tom);
}
