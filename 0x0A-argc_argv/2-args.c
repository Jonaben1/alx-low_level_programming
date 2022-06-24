#include "main.h"
#include <stdio.h>

/**
 *  main - a function that prints all arguments it recieves
 *  @argc: the command line being used
 *  @argv: the command line being used
 *  Return: Always 0 success
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]-1);
	}
	printf("\n");
	return (0);
}
