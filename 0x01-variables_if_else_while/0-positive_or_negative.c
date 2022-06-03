#include <stdlib.h>
#include <time.h>
/** more headers goes there 
 *  Notice the two libraries included
 */

/** The main function will generate
 *  random number when called
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/** your code goes there 
	 *  Here, we will perform a 
	 *  logical operation
	 */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
		return (0);
}
