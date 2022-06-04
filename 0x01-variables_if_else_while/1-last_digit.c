#include <stdlib.h>
#include <time.h>
/** more headers go here
 *  Notice two new libraries were
 *  included
*/

/** The function main.c will generate a
 *  random number and print out the
 *  last digit of the number
 */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/**
         * To get the last digit number
	 */
	lastDigit  = n % 10;
	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}
	if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	}
	if ((lastDigit < 6) && (lastDigit != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
	}
	return (0);
}
