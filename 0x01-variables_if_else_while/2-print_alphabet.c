#include <stdio.h>
int main()
{
/** The stdio.h is to enable putchar 
 *  to work.
*/

/** The main.c will print out lower
 *  case aplhabet from a- z
*/

	int x  = 'a';
	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	return (0);
}

