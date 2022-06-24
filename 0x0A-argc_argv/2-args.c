#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints all argumet it receives followed by a new line
 * @argc: the command line argument used
 * @argv: the command line argument used
 * Return: Always 0 success
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
}


