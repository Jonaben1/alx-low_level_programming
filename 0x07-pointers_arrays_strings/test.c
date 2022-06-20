#include "main.h"

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *a;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				a = (s + i);
				return (a);
			}
		}
	}
	return ('\0');
}
