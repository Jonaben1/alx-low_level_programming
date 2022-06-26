#include "main.h"
#include <stdio.h>

/**
 *  main - a function that prints the number of argument passed into it
 *  @argc: the command line being used
 *  @argv: the command line being used
 *  Return: Always 0 success
*/

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
