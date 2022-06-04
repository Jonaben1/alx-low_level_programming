#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *  main - more headers go here
 *  Description - Notice two new libraries were
 *
 *  Return: Always(0) Success
 */
int main(void)
{
	int n, lasDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/**
	 * To get the last digit number
	 */
	lasDigit  = n % 10;
	if (lasDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lasDigit);
	}
	if (lasDigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lasDigit);
	}
	if ((lasDigit < 6) && (lasDigit != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lasDigit);
	}
	return (0);
}
