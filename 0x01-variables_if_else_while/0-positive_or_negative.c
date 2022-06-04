#include <stdlib.h>
#include <time.h>
/**
 *  main - assign a random number to a variable and execute
 *
 *  Description: The numbers are all single digits
 *  Return: Always(0) Success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/**
	 *  your code goes there
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
