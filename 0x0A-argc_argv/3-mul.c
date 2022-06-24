#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *  main - a function that multiplies two numbers from the command line
 *  @argc:  the command line being used
 *  @argv: the command line being used
 *  Return: Always 0 success
*/

int main(int argc, char *argv[])
{
	int i;
	int sum = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		sum = sum * atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
