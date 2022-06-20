#include <stdio.h>
#include "main.h"

/**
 *  _strpbrk - the function that searches a string for any of a set of bytes
 *  @s: the pointer being tested
 *  @accept: the pointer being tested
 *  Return: Always 0 success
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	int post = 0;
	int flag = 0;

	while (*(s + i))
		i++;

	post = i;
	i = 0;
	while (*(accept + i))
	{
		j = 0;
		while (*(s + j))
		{
			if (accept[i] == s[j])
			{
				if (j <= post)
				{
					post = j;
					flag = 1;
				}
			}
			j++;
		}
		i++;
	}

	if (flag == 1)
		return (&s[post]);
	return (NULL);
}

