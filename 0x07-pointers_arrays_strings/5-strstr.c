#include "main.h"

/**
 *  _strstr - a function that fills memory with a constant byte
 *  @haystack: the pointer being tested
 *  @needle: the pointer being tested
 *  Return: Always 0 success
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j, point = 0;

	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j]; j++)
			{
				if (haystack[i + j] == needle[j])
					point = 1;
				else
					point = 0;
			}
		}
		if (point == 1)
			return (haystack + i);
	}
	if (*needle == '\0')
		return (haystack);
	else
		return (0);
}

