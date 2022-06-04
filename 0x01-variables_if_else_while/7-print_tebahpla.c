#include <stdio.h>
int main()
{
/** The stdio.h is to enable putchar 
 *  to work.
*/

/** The main.c will print out lower
 *  case aplhabet from a- z
*/

	int i = 'z';
	
	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	return (0);
}

