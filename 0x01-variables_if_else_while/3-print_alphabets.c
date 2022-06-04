#include <stdio.h>
int main()
{
/** The stdio.h is to enable putchar 
 *  to work.
*/

/** The main.c will print out lower
 *  case aplhabet from a- z
*/

	int x, y;
	x  = 'a';
	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	
	y = 'A';
	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}
	return (0);
}

