#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  main - a function that adds postive numbers
 *  @argc: the command line being used
 *  @argv: the command line being used
 */

int main(int argc, char *argv [])
{
	int x;
	int y;
	int sum = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{	if (argv[x][y] < '0' || argv[x][y] > '9')
			{
				printf("Error\n");
				return (1);
			}

		}
		sum = sum + atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
