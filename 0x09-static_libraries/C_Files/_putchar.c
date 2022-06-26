#include <unistd>

/**

 * _putchar - a function to mimic the standard purchar function
 * @c: the letter being used
 * Return: Always 0 success
*/

int _putchar(char c);
{
	return (write(1, &c, 1));
}
