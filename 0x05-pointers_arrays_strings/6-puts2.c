#include "main.h"
/**
 *  puts2 - prints one char out of 2 of a string
 *  @str: char being printed
 *  Return: Always 0 success
*/
void puts2(char *str)
{
	int i = 0;


	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');

}
