#include <stdio.h>
/**
* main - prints all the numbers of base 16 in lowercase
*
* Description: The numbers are all single digits
* Return: Always(0) Success
*/
int main(void)
{
<<<<<<< HEAD
	int i;
=======
	int i, x;

>>>>>>> 655b4872be1a24f4f433632ed3b2ea5f7a3d2ae5
	i = 48;
	while (i < 58)
	{
		putchar(i);
		i++;
	}

<<<<<<< HEAD
=======
	x = 'a';
	while (x <= 'f')
	{
		putchar(x);
		x++;
	}
>>>>>>> 655b4872be1a24f4f433632ed3b2ea5f7a3d2ae5
	putchar('\n');

	return (0);
}

