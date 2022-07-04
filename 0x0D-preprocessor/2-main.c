#include <stdio.h>

/**
 * main - a function to print a filename it was compiled
 * Return: Always 0 success
*/

int main()
{

	char filename[] = __FILE__;
	printf("%s\n", filename);
}
